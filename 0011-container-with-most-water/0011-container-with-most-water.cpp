class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0; 
        int right = height.size() - 1;
        int area = 0;
        while (left < right) {
            int leftHeight = height[left];
            int rightHeight = height[right];
            int currentArea = (right - left) * (leftHeight < rightHeight ? leftHeight : rightHeight);
            if (currentArea > area) {
                area = currentArea;
            }
            if (leftHeight < rightHeight) {
                left++;
            } else {
                right--;
            }
        }
        return area;
    }
};