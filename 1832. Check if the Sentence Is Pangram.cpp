class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        unordered_set<char> st(sentence.begin(),sentence.end());
        return st.size() == 26;


    }
};

// Using unordered map
class Solution {
public:
    bool checkIfPangram(string sentence) {
        
      //condition to check if size more than num of alphabets
    if(sentence.size() < 26)return false;
    
    unordered_map<char,int> m;
    
	//loop to fill map 
    for(int i=0; i<sentence.size(); i++)
        m[sentence[i]]++;
    
	//check size of map to be 26 or not
    if(m.size() == 26)
        return true;
    else
        return false;
    }
}; 