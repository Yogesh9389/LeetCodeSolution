class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        while(num != 0)
        {
            int r = num%10;
            v.push_back(r);
            num = num/10;
        }
        sort(v.begin(), v.end());
        int num1 = 0;
        int num2 = 0;
        int n = v.size();
        for(int i =0; i<n; i++)
        {
            if(i%2==0)
            {
                num1 = num1*10 + v[i];
            }
            else
            {
                num2 = num2*10 + v[i];
            }
        }
        return num1+num2;
    }
};
