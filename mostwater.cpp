class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int n = height.size();
        int j = n - 1;
        int maxarea = 0, currentarea = 0;
        while (i < j) {
            if (height[i] <= height[j]) {
                currentarea = min(height[i], height[j]) * (j - i);
                maxarea = max(currentarea, maxarea);
                i++;

            } else {
                currentarea = min(height[i], height[j]) * (j - i);
                maxarea = max(currentarea, maxarea);
                j--;
            }
        }
        return maxarea;
    }
};