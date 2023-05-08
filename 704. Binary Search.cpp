class Solution {
public:
    int search(vector<int>& nums, int target) {
        
            int n = nums.size();
            int last = n-1;
            int first = 0;
            int mid, i;
            for(int i=0; i<n; i++)
            {
                mid = first + (last-first)/2;
                if(nums[mid] == target)
                {
                    return mid;
                }
                else if(target > nums[mid])
                {
                    first = mid+1;
                }
                else{
                    last = mid-1;
                }
            }
        return -1;
    }
};
