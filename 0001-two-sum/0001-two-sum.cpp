class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (map.find(complement) != map.end()) {
                solution.push_back(map[complement]);
                solution.push_back(i);
                return solution;
            }
            map[nums[i]] = i;
        }
        return {};
    }
};
