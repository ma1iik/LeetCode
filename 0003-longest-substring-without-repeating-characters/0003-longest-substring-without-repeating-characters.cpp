class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> Set;
        int left = 0, right = 0, size = 1;
        if (s.size() == 0)
            return 0;
        while (right < s.size()) {
            if (Set.find(s[right]) != Set.end()) {
                if (Set.size() > size)
                    size = Set.size();
                while (s[left] != s[right]) {
                    Set.erase(s[left]);
                    left++;
                }
                left++;
            }
            else {
                Set.insert(s[right]);
            }
            right++;
        }
        if (Set.size() > size)
                    size = Set.size();
        return size;
    }
};