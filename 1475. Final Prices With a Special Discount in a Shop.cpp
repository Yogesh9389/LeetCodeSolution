class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> v(prices.size());
        stack<int> st;
        st.push(-1);
        int j =0;
        int n = prices.size();
        for(int i=n-1; i>=0; i--){
            j = prices[i];
            while(st.top() > j){
                st.pop();
            }
            if(st.top() == -1){
                v[i] = prices[i];
            }
            else{
                v[i] = prices[i] - st.top();
            }
            st.push(j);
        }
        
         
        return v;
    }
};