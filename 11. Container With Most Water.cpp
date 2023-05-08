class Solution {
public:
    int maxArea(vector<int>& height) {

            int n = height.size();
            int l = 0;
            int r = n-1;
            int min1 = 10000;
            int max1 = 0;
            while(l<r)
            {
                int lh = height[l];
                int rh = height[r];
                min1 = min(lh,rh);
                max1 = max(max1, (min1*(r-l)));
                if(rh>lh)
                l++;
                else
                r--;
            }

        return max1;

    }
};
