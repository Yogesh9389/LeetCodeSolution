class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        
        int count =0;
        unordered_map<int,int> m;
        for(auto x:nums){
            if(m.find(x-k) != m.end())
                count += m[x-k];

             if(m.find(x+k) != m.end())
                count += m[x+k];

            m[x]++;
        }
        return count;

    }
};