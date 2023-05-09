class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        long int sum =0;
        for(auto x:gifts)
        {
            pq.push(x);
        }
        for(int i=0; i<k; i++)
        {
            int a = pq.top();
            int s = sqrt(a);
            pq.pop();
            pq.push(s);
        }
        while(pq.size()>0)
        {
            sum = sum + pq.top();
            pq.pop();
        }
        return sum;
    }
};