
//optimized code using hash map

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count=0;
        unordered_map<int,bool> mp;

        //Mark element in map
        for(int i=0; i<nums.size(); i++)
            mp[nums[i]] = true;

        // increase count if nums[elem]-diff and  nums[elem]+diff present in map
        for(int i=0; i<nums.size(); i++)
        {
            if(mp[nums[i]-diff] && mp[nums[i]+diff])
            {
                count++;
            }
        }
        return count;
    }
};