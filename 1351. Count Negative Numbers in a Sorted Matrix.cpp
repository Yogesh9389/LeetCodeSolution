//***********BRUTE FORCE***********
//*************O(N^2)********


class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count =0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] < 0){
                    count++;
                }
            }
        }
        return count;
    }
};

//*********OPTIMIZED***************
//****************O(M+N)**********************

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        //Optimized
        int m = grid.size();
        int n = grid[0].size();
        int count =0; 
        int i=0;
        int j= n-1;
        while( (i < m) && (j >= 0) ){
            if(grid[i][j] < 0){
                count += m - i;
                j -= 1;
            }
            else{
                i += 1;
            }
        }
        return count;
    }
};