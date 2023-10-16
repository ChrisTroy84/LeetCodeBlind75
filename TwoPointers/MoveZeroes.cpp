#include <iostream>
#include <vector>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        //two pointer approach
        
        //store the pos of the last non-zero:
        int lastNonZero = 0;
        //if curr element is not 0, append it in front
        //of last non 0 element found
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[lastNonZero++] = nums[i];
            }
        }
        // After we have finished processing new elements,
 	    // all the non-zero elements are already at beginning of array.
 	    // We just need to fill remaining array with 0's.
        for (int i = lastNonZero; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
    //Time = o(n), space = O(1)
};