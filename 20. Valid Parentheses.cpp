class Solution {
public:
    bool isValid(string s) {
        char a;
        bool ans = false;
        stack<char> st;
        for(char x:s){
            if(st.empty()){
                st.push(x);
            }
            else{
                if(x=='(' || x=='{' || x=='['){
                    st.push(x);
                }
                else{
                    a = st.top();
                    st.pop();
                    if(x == ')' && a == '(' || x=='}' && a=='{' || x==']' && a=='[') ans = true;
                	else{
                    	ans = false;
                    	break;
                	}
                }
                
               
            }
        }
        if(!st.empty()) ans = false;
        return ans;
    }
};