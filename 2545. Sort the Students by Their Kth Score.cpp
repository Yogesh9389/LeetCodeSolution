class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        priority_queue<pair<int,int>> pq;
        int n = score.size();
        vector<vector<int>> ans;
        for(int i=0; i<n; i++)
        {
            pq.push({score[i][k],i});
        }
        while(pq.size() != 0)
        {
            auto x = pq.top().second;
            pq.pop();
            ans.push_back(score[x]);
        }
        return ans;
    }
};