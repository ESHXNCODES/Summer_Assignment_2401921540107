class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         int n = s1.length();
        int m = s2.length();

        if (n > m) return false;

        vector<int> freqs1(26, 0);
        vector<int> freqs2(26, 0);

        // Fill frequency of characters in s1
        for (int i = 0; i < n; i++) {
            freqs1[s1[i] - 'a']++;
        }

        
        int l = 0; // left index of the sliding window
        int r = 0; // right index of the sliding window
        while (r < m) {
            freqs2[s2[r] - 'a']++;

           
            if (r - l + 1 > n) {
                
                freqs2[s2[l] - 'a']--;
                l++;
            }
            if (freqs1 == freqs2) {
                return true;
            }

            r++;
        }
        return false;
    }
};