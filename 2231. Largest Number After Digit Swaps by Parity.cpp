class Solution {
public:
    int largestInteger(int num) {
    long long int temp = num;
       vector<int> v;
       while(num){
           v.push_back(num%10);
           num /= 10;
       } 
       reverse(v.begin(),v.end());
       vector<int> even;
       vector<int> odd;
       for(int i=0; i<v.size(); i++)
       {
           if(v[i] % 2==0)
           {
               even.push_back(v[i]);
           }
           else{
               odd.push_back(v[i]);
           }
       }
       sort(even.begin(),even.end(),greater<int>());
       sort(odd.begin(),odd.end(),greater<int>());
       int x=0;
       int y=0;
       for(int i=0; i<v.size(); i++){
           if(v[i] %2 == 0){
               v[i] = even[x++];
           }
           else{
               v[i] = odd[y++];
           }
       }
       temp = 0;
       for(int i=0; i<v.size(); i++)
       {
           temp = temp*10 + v[i];
       }
       return temp;
    }
};