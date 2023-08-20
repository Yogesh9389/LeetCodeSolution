class Solution {
public:
    void reverse(vector<int>& nums, int low, int heigh){
        while(low < heigh) {
            swap(nums[low], nums[heigh]);
            low++;
            heigh--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums, 0, n-k-1);
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-1);
    }
};