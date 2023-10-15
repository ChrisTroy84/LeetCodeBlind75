#include <iostream>
#include <string>
#include <vector>




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
            