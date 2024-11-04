class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> CharIndx;
        int maxL = 0;
        int left = 0;
        if (s.length() == 0)
            return 0;
        for (int right = 0; right < s.size(); right++) {
            char cur = s[right];
            if (CharIndx.find(cur) != CharIndx.end() && CharIndx[cur] >= left) {
                left = CharIndx[cur] + 1;
            }
            CharIndx[cur] = right;  
            maxL = max(maxL, right - left + 1);
        }
        return maxL;
    }
};