class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;    
        for(int i=0;i<mat.size();i++)
        {
            int sum = 0;
            for(int j=0;j<mat[i].size();j++)
            {
                sum += mat[i][j];
            }
            pq.push({sum,i});
        }
        vector<int> v;
        for(int i=0; i<k; i++)
        {
            int x = pq.top().second;
            v.push_back(x);
            pq.pop();
        }
        return v;
    }
};