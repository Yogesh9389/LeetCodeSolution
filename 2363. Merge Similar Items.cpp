
//currently not working

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        // using simple vector
        vector<vector<int>> v;
        sort(items1.begin(), items1.end());
         sort(items2.begin(), items2.end());
         int m = items1.size();
         int n = items2.size();
         int i=0;   
         int j=0;
        while(i<m && j<n)
         {
             if(items1[i][0] == items2[j][0])
             {
                v.push_back({items1[i][0],items1[i][1]+items2[j][1]});
                i++;
                j++;
             }
             else if(items1[i][0] < items2[j][0])
             {
                  v.push_back({items1[i][0],items1[i][1]});
                  i++;
             }
             else 
             {
                  v.push_back({items2[j][0],items2[j][1]});
                  j++;
             }
        }
        while(i < m)
        {
            v.push_back({items1[i][0],items1[i][1]});
        }
        while(j < n)
        {
            v.push_back({items2[j][0],items2[j][1]});
        }
         return v;
    }
};