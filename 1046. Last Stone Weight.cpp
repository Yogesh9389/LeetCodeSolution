class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto x:stones)
        {
            pq.push(x);
        }
        while(pq.size()>1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            int r = abs(a-b);
            if(r>0)
            {
                pq.push(r);
            }
        }
        if(pq.size() == 0)
            return 0;
            return pq.top();
    }
};