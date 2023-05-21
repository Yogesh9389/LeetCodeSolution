class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        int index =0;
        vector<int> v;
        for(int i=0; i<n; i++){
            index = nums[i];
            v.push_back(nums[index]);
        }
        return v;
    }
};