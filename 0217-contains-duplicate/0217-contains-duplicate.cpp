class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.find(num) != seen.end() && !seen.empty())
                return true;
            else 
                seen.insert(num);
        }
        return false;
    }
};