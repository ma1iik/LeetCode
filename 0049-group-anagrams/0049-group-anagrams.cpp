class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> angrms;
        string sorted;
        for (auto s : strs) {
            sorted = s;
            sort(sorted.begin(), sorted.end());
            angrms[sorted].push_back(s);
        }
        vector<vector<string>> retVal;
        for (auto e : angrms) {
            retVal.push_back(e.second);
        }
        return retVal;
    }
};