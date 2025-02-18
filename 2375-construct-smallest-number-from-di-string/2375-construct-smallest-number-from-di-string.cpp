class Solution {
public:
    string ans = "{";

    void getans(string currans, string pattern, int pindex, vector<int>& check) {
        if (currans.length() == pattern.length() + 1) {
            ans = min(ans, currans);
            return;
        }

        if (pattern[pindex] == 'I') {
            for (int i = 1; i <= 9; i++) {
                if (check[i] == 0 && i > (currans.back() - '0')) {
                    check[i] = 1;
                    getans(currans + to_string(i), pattern, pindex + 1, check);
                    check[i] = 0;
                }
            }
        } else if (pattern[pindex] == 'D') {
            for (int i = 1; i <= 9; i++) {
                if (check[i] == 0 && i < (currans.back() - '0')) {
                    check[i] = 1;
                    getans(currans + to_string(i), pattern, pindex + 1, check);
                    check[i] = 0;
                }
            }
        }
    }

    string smallestNumber(string pattern) {
        vector<int> check(10, 0);
        for (int i = 1; i <= 9; i++) {
            check[i] = 1;
            getans(to_string(i), pattern, 0, check);
            check[i] = 0;
        }
        return ans;
    }
};