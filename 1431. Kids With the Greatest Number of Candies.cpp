class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool> ans;
        int max = INT_MIN;
        for(auto x:candies)
        {
            if(x > max){
                max = x;
            }
        }
        for(int i=0; i<candies.size(); i++){
            if((candies[i] + extraCandies) >= max)
            {
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;

    }
};