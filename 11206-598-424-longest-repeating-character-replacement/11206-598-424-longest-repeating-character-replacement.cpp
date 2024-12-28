class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freqMap;
        int freqTop = 0;
        int begin = 0;
        int longest = 0;
        if (s.size() == 0) return 0;
        for (int end = 0; end < s.size(); ++end) {
            freqTop = max(freqTop, ++freqMap[s[end]]);
            if (((end - begin + 1) - freqTop) <= k) {
                longest = max(longest, end - begin + 1);
            }
            else {
                freqMap[s[begin]]--;
                begin++;
            }
        }
        return longest;
    }
};