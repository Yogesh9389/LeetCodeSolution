class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        int water =0;
        int lmax =height[0];
        int rmax =height[n-1];
        int lpos = 1;
        int rpos = n-1;     
        while(lpos <= rpos){
            if( height[lpos] >= lmax ){
                lmax = height[lpos];
                lpos++;
            }
            else if( height[rpos] >= rmax){
                rmax = height[rpos];
                rpos--;
            }
            else if(lmax <= rmax && height[lpos] < lmax){
                water += lmax - height[lpos];
                lpos++;
            }
            else{
                water += rmax - height[rpos];
                rpos--;
            }
        }   
        return water;
    }
};