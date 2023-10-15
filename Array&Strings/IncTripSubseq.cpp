#include <iostream>
#include <string>
#include <vector>
#include <cmath>


class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();

        vector<int> result;

        for (int i = 0; i < n; i++) {
            if (result.empty() || result.back() < nums[i]) {
                result.push_back(nums[i]);
            }
            else {
                auto it = lower_bound(result.begin(), result.end(), nums[i]);
                *it = nums[i];
            }
            if (result.size() == 3) {
                return true;
            }
        }
        return false;
    }
    //time = O(nlogn), space = O(1)
};           