#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // Find out the greatest number of candies among all the kids.
        int maxCandies = 0;
        for (int candy : candies) {
            maxCandies = max(maxCandies, candy);
        }
        // For each kid, check if they will have greatest number of candies
        // among all the kids.
        
    }
};