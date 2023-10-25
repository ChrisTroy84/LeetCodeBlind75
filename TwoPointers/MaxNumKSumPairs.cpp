#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        //sort the array O(nlog(n)):
        sort(nums.begin(), nums.end());

        //initialize two pointers:
        int left = 0;
        int right = nums.size() - 1;
        
        int count = 0;

        while (left < right) {
            //found an operation, move both pointers
            if (nums[left] + nums[right] == k) {
                count++;
                left++;
                right--;
            }
            //dec. right pointer to get lower vals to find a sum for k
            else if (nums[left] + nums[right] > k) {
                right--;
            }
            //inc. left pointer for larger vals to find a sum for k
            else if (nums[left] + nums[right] < k) {
                left++;
            }
        }
        return count;
    }
    //Time = O(nlog(n)), space = O(1)
};