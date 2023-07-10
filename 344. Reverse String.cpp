class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = s.size();
        int j = l-1;
        for(int i=0; i<l/2; i++)
        {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            j--;

        }
    }
};