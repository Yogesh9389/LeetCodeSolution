class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        int x,y,count;
        for(int i=0; i<m; i++)
        {
            vector<int> v;
            x=i;
            y=0;
            while(x<m && y<n)
            {
                v.push_back(mat[y][x]);
                x++;
                y++;
            }
            sort(v.begin(), v.end());
            x=i;
            y=0;
            count=0;
            while(x<m && y<n)
            {
                mat[y][x] = v[count];
                x++;
                y++;
                count++;
            }
        }
         for(int i=1; i<n; i++)
        {
            vector<int> v;
            x=0;
            y=i;
            while(x<m && y<n)
            {
                v.push_back(mat[y][x]);
                x++;
                y++;
            }
            sort(v.begin(), v.end());
            x=0;
            y=i;
            count=0;
            while(x<m && y<n)
            {
                mat[y][x] = v[count];
                x++;
                y++;
                count++;
            }
        }
        return mat;
    }
};