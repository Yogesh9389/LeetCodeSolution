class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> v;
        int maxi = 0;
            for(int j=0; j<points.size(); j++)
            {
                v.push_back(points[j][0]);
            }
        sort(v.begin(),v.end());
        for(int i=1;i<v.size();i++)
        {
         maxi = max(maxi,v[i]-v[i-1]);
          
        }
        return maxi;
    }
};