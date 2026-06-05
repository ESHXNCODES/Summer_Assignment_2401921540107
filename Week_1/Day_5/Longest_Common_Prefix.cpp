class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(), strs.end());

        string f = strs[0];
        string l = strs[strs.size() - 1];

        int i = 0;

        while(i < f.length() && i < l.length()) {

            if(f[i] != l[i]) {
                break;
            }

            i++;
        }

        return f.substr(0, i);
    }
};