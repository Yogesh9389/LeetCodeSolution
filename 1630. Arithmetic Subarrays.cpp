class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        int temp = 1;
        int n = l.size();
        int count = 0;
        while(count < n)
        {
            vector<int> v;
            for(int i=l[count]; i<=r[count]; i++)
            {
                v.push_back(nums[i]);
            }
            sort(v.begin(),v.end());
            int a = v[1] - v[0];
            for(int i=1; i<v.size(); i++)
            {
                
                if(a == (v[i] - v[i-1]))
                {
                    temp = 1;
                  
                }
                else
                {
                    temp = 0;
                    break;
                }
            }
            if(temp == 1)
                ans.push_back(true);
           
            else
                 ans.push_back(false);

            temp = 0;
            count++;
        }
        return ans;
    }
};