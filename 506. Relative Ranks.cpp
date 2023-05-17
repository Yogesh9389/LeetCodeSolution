int n = score.size();
    unordered_map<int, int> m;
    for(int i=0; i<n; i++)
    {
        m[score[i]] = i;
    }
    sort(score.begin(),score.end(),greater<int>());

    vector<string> ans(n);
    for(int i=0; i<n; ++i)
    {
        int k = m[score[i]];
        switch(i){
            case 0: ans[k] = "Gold Medal"; break;
            case 1: ans[k] = "Silver Medal"; break;
            case 2: ans[k] = "Bronze Medal"; break; 
            default: ans[k] = to_string(i+1);
        }
    }
    return ans; 