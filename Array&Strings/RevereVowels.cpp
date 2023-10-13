#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    //helper funct to check if char is vowel
    bool isVowel(char c) {
        c = tolower(c);

        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    }

    string reverseVowels(string s) {

        //two pouinters
        int left = 0;
        int right = s.size() - 1;

        //while there are chars to traverse
        while (left < right) {
            //find leftmost vowel
            while (left < s.size() && !isVowel(s[left])) {
                left++;
            }
            //find rightmost vowel
            while (right >= 0 && !isVowel(s[right])) {
                right--;
            }
            //swap if left is l of right:
            if (left < right) {
                swap(s[left++], s[right--]);
            }
        }
        return s;
    }
    //time and space comp. = O(n)
};