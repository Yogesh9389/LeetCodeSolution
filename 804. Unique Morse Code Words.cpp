class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_set<string> s;
        for(auto i:words){
            string temp="";
            for(int j:i){
                temp += morse[j-'a'];
            }
            s.insert(temp);
        }

        return s.size();
    }
};


// using map

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        //using map
        string morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_map<string, int> m;
        for(auto i:words){
            string temp="";
            for(int j:i){
                temp += morse[j-'a'];
            }
            m[temp]++;
        }

        return m.size();
    }
};