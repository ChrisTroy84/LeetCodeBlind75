#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int result = 0;

        while (i < chars.size()) {
            //find length of curr group of repeating chars (groupLength)
            int groupLength = 1;
            while (i + groupLength < chars.size() && chars[i + groupLength] == chars[i]) {
                groupLength++;
            }
            chars[result++] = chars[i];
            if (groupLength > 1) {
                for (char c : std::to_string(groupLength)) {
                    chars[result++] = c;
                }
            }
            i += groupLength;
            //go to next group
        }
        return result;
    }
    //Time = O(n), space = O(1)
};