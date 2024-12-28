class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() == 0)
            return 0;
        auto left = height.begin();
        auto right = height.end() - 1;
        int water = 0;
        int leftMax = *left;
        int rightMax = *right;
        int step = 1;
        while (left < right) {
            if (*left > *right)
            {
                water += min(leftMax, rightMax) - *right;
                right--;
                rightMax = max(rightMax, *right);
            }
            else {
                water += min(leftMax, rightMax) - *left;
                left++;
                leftMax = max(leftMax, *left);
            }
            step++;
        }
        return water;
    }
};
