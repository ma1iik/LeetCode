class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;
        unordered_set<int> set(nums.begin(), nums.end());
        int longest = 1;
        for (auto num : set) {
            if (set.find(num - 1) != set.end()) {
                continue;
            }
            else if (set.find(num + 1) != set.end()) {
                int tmp = num;
                int newLength = 1;
                while (set.find(tmp + 1) != set.end()) {
                    tmp++;
                    newLength++;
                }
                longest = (newLength > longest) ? newLength : longest;
            }
        }
        return longest;
    }
};