#include <iostream>
#include <string>
#include <numeric>

using namespace std;

class Solution {
    public:
        string gcdOfStrings(string str1, string str2) {
            //check if concatenated strings are equal:
            if (str1 + str2 != str2 + str1) {
                return "";
            }
            //if strings are equal then return substr from 0 to gcd of sizes
            return str1.substr(0, std::gcd(str1.size(), str2.size()));
        }
};