class Solution {
public:
    int calPoints(vector<string>& operations) {
       stack<int> st;
       int x,y;
       int n = operations.size();
       for(string i:operations){
            if(i == "C"){
                st.pop();
            }
            else if(i == "D"){
                st.push(st.top()*2);
            }
            else if(i == "+"){
                x = st.top();
                st.pop();
                y= st.top();
                st.push(x);
                st.push(x + y);
            }
            else{
               st.push(stoi(i));
            }
        }
        int ans=0;
        while(st.size() != 0){
            ans += st.top();
            st.pop();
        }
       
       return ans;
    }
};