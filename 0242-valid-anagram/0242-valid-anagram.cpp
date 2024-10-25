class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char,int>map1;
        // insert the character of string s in map1
        for(int i=0; i<s.length(); i++){
            map1[s[i]]++; // it will 1st count the frequency of character 1 if not present in map1
            // and when it will find the same character will increase frequency of that character
        }
        for(int i=0; i<t.length(); i++){
            char ch = t[i];
            if(map1.find(ch) != map1.end()){
                map1[ch]--;
                if(map1[ch]==0) map1.erase(ch);
            }
            else return false;
        }
        return true;
    }
};