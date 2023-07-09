#brute force 

class Solution {
public:
    int countGoodSubstrings(string s) {
      int count =0;
      int n = s.length();
      
      if(n<3)
      return 0;

      char a=s[0]; 
      char b=s[1]; 
      char c=s[2];

      for(int i=3; i<n;i++)
      {
          if(a != b && b != c && c!= a)
          count++;

          a=b;
          b=c;
          c=s[i];
      }  
      
      if(a != b && b != c && c!= a)
          count++;  

      return count;  
    }
};