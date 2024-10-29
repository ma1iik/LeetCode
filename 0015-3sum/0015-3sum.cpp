class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;
        int size = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < size -2; i++) {
            if (i > 0 && nums[i - 1] == nums[i])
                continue;
            twoSum(nums, -nums[i], nums[i], i+1, ret);
        }
        return ret;
    };

    void twoSum(vector<int>& numbers, int target, int first, int start, vector<vector<int>> &ret) {
        int left = start, right = numbers.size() - 1;
        while (left < right) {
            if (numbers[left] + numbers[right] > target) {
                right--;
            }
            else if (numbers[left] + numbers[right] < target) {
                left++;
            }
            else if (numbers[left] + numbers[right] == target) {
                    ret.push_back({first, numbers[left], numbers[right]});
                    left++; 
            }
            while (left < right && left > start && numbers[left] == numbers[left - 1]) left++;
            while (left < right && right < numbers.size() - 1 && numbers[right] == numbers[right + 1]) right--;
        }
    }
};