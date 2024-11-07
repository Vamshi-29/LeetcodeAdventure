class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n <= 1) return s;

        int maxlen = 1;
        int start = 0;

        for (int i = 0; i < n; ++i) {
            int l = i;
            int r = i;
            while (l >= 0 && r < n && s[l] == s[r]) {
                if (r - l + 1 > maxlen) {
                    maxlen = r - l + 1;
                    start = l;
                }
                l--;
                r++;
            }
        }

        for (int i = 0; i < n - 1; ++i) {
            int l = i;
            int r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                if (r - l + 1 > maxlen) {
                    maxlen = r - l + 1;
                    start = l;
                }
                l--;
                r++;
            }
        }

        return s.substr(start, maxlen);
    }
};