class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> v;
        for(auto x:nums)
        {
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int n = v.size();
        int a = v[n-1] - 1;
        int b = v[n-2] - 1;
        return a*b;
    }
};