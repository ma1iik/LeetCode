class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;
        unordered_set<int> set(nums.begin(), nums.end());
        int longest = 0;
        for (auto num : set) {
            if (set.find(num - 1) == set.end()) {
                int newLength = 1;
                while (set.find(num + 1) != set.end()) {
                    num++;
                    newLength++;
                }
                longest = max(longest, newLength);            }
        }
        return longest;
    }
};