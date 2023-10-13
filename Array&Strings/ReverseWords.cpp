#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int size = s.size();
        //two pointers
        int i =0;
        int j = 0;

        while (i < size) {
            while (i < size && s[i] == ' ') {
                i++;
            }
            if (i < size && j > 0) {
                s[j++] = ' ';
            }
            