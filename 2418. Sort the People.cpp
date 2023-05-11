class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       priority_queue<pair<int,string>> pq;
       int n = heights.size();
       for(int i =0; i<n; i++)
       {
           pq.push({heights[i],names[i]});
       }
       vector<string> ans;
       while(pq.size() != 0)
       {
           string x = pq.top().second;
           ans.push_back(x);
           pq.pop();
       } 
        
        return ans;
    }
};