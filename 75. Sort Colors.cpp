class Solution {
public:
    void sortColors(vector<int>& nums) {
       int i =0;
       int j = nums.size()-1;
       int p =0;
       while(i<=j)
       {
           if(nums[i] == 0)
           {
               nums[i] = nums[p];
               nums[p] = 0;
               p++;
               i++;
           }
           else if(nums[i] == 2)
           {
               nums[i] = nums[j];
               nums[j] = 2;
               j--;
           }
           else
            i++;
       }
       
    }
};