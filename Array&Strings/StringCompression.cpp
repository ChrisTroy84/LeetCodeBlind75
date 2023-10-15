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
            