class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0;
        int n = s.size();
        int l=0, r=0;
        for(int i=0; i<n; i++){
            
            if(s[i] == 'R'){
                l++;
            }
            else{
                r++;
            }
            if(l==r){
                ans++;
                l=0;
                r=0;
            }
        }
        return ans;
    }
};