class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        // using Hash Map
        vector<vector<int>> v;
        map<int,int> m;
        for(auto x:items1)
        {
            m[x[0]] += x[1];
        }
        for(auto x: items2)
        {
            m[x[0]] += x[1];
        }
        for(auto x:m)
        {
            v.push_back({x.first,x.second});
        }
         return v;
    }
};