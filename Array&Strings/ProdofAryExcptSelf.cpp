#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        //init 2 vectors: size n w/ initalized vals to 1
        vector<int> left_prod(n, 1);
        vector<int> right_prod(n, 1);

        //iter through the vectors:
        int left_product = 1;
        for (int i = 0; i < n; i++) {
            left_prod[i] = left_product;
            left_product *= nums[i];
        }

        int right_product = 1;
        for (int i = n - 1; i >= 0; i--) {
            right_prod[i] = right_product;
            right_product *= nums[i];
        }

        //create vect for result:
        vector<int> result(n);
        for (int i = 0; i < n; i++) {
            result[i] = right_prod[i] * left_prod[i];
        }
        return result;
    }
    //space and time complexity = O(n)
};