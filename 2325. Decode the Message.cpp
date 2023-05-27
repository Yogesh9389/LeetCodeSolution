//The map::count() is a built-in function in C++ STL which returns 1 if the element with key K is present in the map container. It returns 0 if the element with key K is not present in the container.
class Solution {
public:
    string decodeMessage(string key, string message) {

       map<char, char> m;
       char ch = 'a';

       for(auto &x:key){
           if(x == ' ') continue;
           if(m.count(x) == 0)  //map.count return 1 if elm present in map or 0
           {
               m[x] = ch++;
           }
       }

       for(auto &x:message){
           if(m.count(x) == 1){
               x = m[x];
           }
       }
        return message;

    }
};