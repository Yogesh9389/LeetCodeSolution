class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int pro1;
        int pro2;
        int maxdiff;   //to return max difference between products
        int n = nums.size();
        pro1 = nums[0] * nums[1];
        pro2 = nums[n-1] * nums[n-2];
        maxdiff = abs(pro1-pro2);
        return maxdiff;
    }
};