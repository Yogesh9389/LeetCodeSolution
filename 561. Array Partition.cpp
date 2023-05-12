class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i=i+2)
        {
            int mini = INT_MAX;
            mini = min(nums[i],nums[i+1]);
            ans += mini;
        }
        return ans;
    }
};