// Greedy approch





//**********************OR****************************        
        
        
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int maxUnit = 0;
        sort(boxTypes.begin(), boxTypes.end(), [](auto& box1, auto& box2) {
            return box1[1] > box2[1];
        });
        for(auto &x:boxTypes){
            int numUnit = min(truckSize,x[0]);
            maxUnit += numUnit * x[1];
            truckSize -= numUnit;
        }
        return maxUnit;
    }
};