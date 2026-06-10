class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();

        for (int len = 1; len <= n / 2; len++) {

            if (n % len != 0) {
                continue;
            }

            string sub = s.substr(0, len);
            string newstring = "";

            int count = n / len;

            while (count > 0) {
                newstring += sub;
                count--;
            }

            if (newstring == s) {
                return true;
            }
        }

        return false;
    }
};