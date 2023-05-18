//Optimized code

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        //using map
        
        int count = 0;
        map<int,int> m;
        for(int i=0; i<nums.size(); i++)
        {
            count += m[nums[i]];
            m[nums[i]]++;
        }
        return count;
    }
};