class Solution {
public:

bool check(const string& prev, const string& curr) {
    int n=prev.length();
    int m=curr.length();
    if(n+1!=m)
    return false;
    int start1=0,start2=0,cnt=0;
    while(start1<n && start2<m)
    {
        if(prev[start1]==curr[start2])
        {
            start1++;
            start2++;
        }
        else
        {
            start2++;
        }
    }
    if(start1==n)
    return 1;
    return 0;
}
int getsol(vector<string>& words, int prev, int index, int n, vector<vector<int>>& memo) {
    if (index >= n)
        return 0;
    if (memo[prev + 1][index] != -1)
        return memo[prev + 1][index];
    
    int pick = 0, notpick = 0;
    if (prev == -1 || check(words[prev], words[index])) {
        pick = 1 + getsol(words, index, index + 1, n, memo);
    }
    notpick = getsol(words, prev, index + 1, n, memo);
    return memo[prev + 1][index] = max(pick, notpick);
}

int longestStrChain(vector<string>& words) {
    int n = words.size();
    sort(words.begin(), words.end(), [](string& a, string& b) {
        return a.size() < b.size();
    });
    vector<vector<int>> memo(n + 1, vector<int>(n+1, -1));
    return getsol(words, -1, 0, n, memo);
}
};