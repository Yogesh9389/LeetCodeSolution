// Using vector

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int pair =0;
        int nonPair =0;
        int i = 0;
        while(i<n-1){
            if(nums[i] == nums[i+1]){
                pair++;
                 i += 2;
            }
            else i++;
        }
        nonPair = n -(2*pair);
        ans.push_back(pair);
        ans.push_back(nonPair);
        return ans;
    }
};

// Using map

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        
        map <int,int> mp;
        for(int i:nums) mp[i]++;
        int pair=0,nonPair=0;
        for(auto x:mp){
            pair+=(x.second/2);
            nonPair+=(x.second%2);
        }
        return {pair,nonPair};


    }
};

