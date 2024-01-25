class Solution {
public:
    int countHomogenous(string s) {
        int n = s.length();
        int start = 0, end = 0;
        long long sum = 0;
        const int MOD = 1e9 + 7;

        while (end < n) {
            if (end > start && s[end] != s[end - 1]) {
                int length = (end - start);
                sum += (1LL * length * (length + 1)) / 2;
                sum %= MOD; 
                start = end;
            }
            end++;
        }
        int length = (end - start);
        sum += (1LL * length * (length + 1)) / 2;
        sum %= MOD;

        return static_cast<int>(sum); 
    }
};



