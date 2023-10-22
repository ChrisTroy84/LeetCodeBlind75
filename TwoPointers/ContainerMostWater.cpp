#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0 ;
        int right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            //use min function to calculate the current Area (height * length)
            int currArea = min(height[left], height[right]) * (right - left);
            maxArea = max(maxArea, currArea);

            //left is limiting, so move inc. left to find potentially more area
            if (height[left] < height[right]) {
                left++;
            }
            //right is limiting (height[left] >= height[right], so dec. right to find more area
            else {
                right--;
            }
        }
        return maxArea;
    }
    //Time = O(n), space = O(1)
};