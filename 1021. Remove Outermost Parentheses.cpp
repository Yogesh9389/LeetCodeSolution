class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int opened =0;
        for(auto x:s){
            if(x == '(' && opened++ > 0) ans += x;
            if(x == ')' && opened-- > 1) ans += x;
        }
        return ans;
    }
};