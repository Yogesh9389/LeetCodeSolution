class Solution {
public:
    int maxDepth(string s) {
        // Using Stack
        stack<char> st;
        int n = s.length();
        int maxi =0;
        for(int i=0; i<n; i++){
            if(st.size() == 0 && s[i] == '('){
                st.push(1);
                maxi = max(maxi, 1);
            }
            else if(s[i] == '('){
                auto x = st.top();
                st.pop();
                st.push(x+1);
                maxi = max(maxi, x+1);
            }
            else if(s[i] == ')'){
                auto x = st.top();
                st.pop();
                if(x != 1){
                    st.push(x-1);
                }
            }
        }
        return maxi;
    }
};


// More shorter method

class Solution {
public:
    int maxDepth(string s) {
        // without using stack
        int d=0; int maxi =0;
        for(auto &x:s)
        {
            d += x == '(';
            d -= x ==')';
            maxi = max(maxi,d);
        }
        return maxi;
    }
};