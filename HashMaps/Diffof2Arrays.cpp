#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<int> distinct1, distinct2;

        for (int num : set1) {
            //if we cant find num in set2, push back num
            if (set2.count(num) == 0) {
                distinct1.push_back(num);
            }
        }

        for (int num : set2) {
            //if we cant find num in set1, push back num
            if (set1.count(num) == 0) {
                distinct2.push_back(num);
            }
        }

        return {distinct1, distinct2};
    }
    //Time = O(m*n), Space = O(m+n)
};