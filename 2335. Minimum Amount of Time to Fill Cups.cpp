class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int> pq;
        int count =0;
        for(auto x:amount)
        {
            pq.push(x);
        }
        int a;
        int b;
        while(1)
        {
           a = pq.top(); 
           pq.pop();
           b = pq.top();
           pq.pop();
           if(a == 0 || b==0){
               count += (a+b);
               return count;
           }
           else{
               count++;
               a--;
               b--;
               pq.push(a);
               pq.push(b);
           }
        }
        return 0;
    }
};