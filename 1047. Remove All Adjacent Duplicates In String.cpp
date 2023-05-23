class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.length();
        stack<pair<char,int>> st;
        string ans;
        int count = 1;
        for(int i=0; i<n; i++){
            if(st.size() == 0){
                st.push({s[i],count});
                continue;
            }
            if(st.top().first == s[i]){
                st.top().second++;
                if(st.top().second > 1){
                    st.pop();
                }
            }
            else{
                count =1;
                st.push({s[i],count});
            }
        }
        while(st.size()!=0){
            ans.push_back(st.top().first);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;


    }
};