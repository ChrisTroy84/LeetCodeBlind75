class Solution {
public:
    void moveZeroes(vector<int>& nums) {
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