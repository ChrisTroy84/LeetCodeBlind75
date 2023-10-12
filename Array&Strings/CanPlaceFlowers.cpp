#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        for (int i = 0; i < flowerbed.size(); i++) {
            //check if current plot is empty:
            if (flowerbed[i] == 0) {
                //check if left and right plots are empty:
                bool empty_left = (i == 0) || (flowerbed[i - 1] == 0);
                bool empty_right = (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);

                //if both right and left empty, we can plant flower:
                if (empty_right && empty_left) {
                    flowerbed[i] = 1;
                    count++;
                }
            }
        }
        return count >= n;
    }
    //Time is O(n), space is O(1)
};