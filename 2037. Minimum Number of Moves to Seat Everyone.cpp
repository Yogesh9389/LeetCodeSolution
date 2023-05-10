class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int x;
        int n = seats.size();
        int sum = 0;
        vector<int> ans;
        for(int i=0; i<n; i++)
        {
            if(seats[i] == students[i])
            {
                x = 0;
                ans.push_back(x);
            }
            else if(seats[i] > students[i])
            {
                x = seats[i] - students[i];
                ans.push_back(x);
            }
            else 
            {
                x = students[i] - seats[i];
                ans.push_back(x);
            }
        }
        for(int i=0; i<ans.size(); i++)
        {
            sum = sum+ans[i];
        }
        return sum;
    }
};