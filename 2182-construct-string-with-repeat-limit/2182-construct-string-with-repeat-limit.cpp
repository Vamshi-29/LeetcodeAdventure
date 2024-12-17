class Solution {
public:
   string repeatLimitedString(string s, int repeatLimit) {
    
    vector<int> charss(26, 0);
    for (auto it : s) {
        charss[it - 'a']++;
    }

    string ans;
    int start = 25; 
    bool prev = false; 
    
    while (true) {
        int added = 0; 
       
        while (start >= 0 && charss[start] == 0) {
            start--;
        }

        if (start < 0) break; 

        
        while (added < repeatLimit && charss[start] > 0) {
            ans += (char)('a' + start);
            charss[start]--;
            added++;
        }

        
        if (charss[start] == 0) {
            prev = false;
        }

        
        if (added == repeatLimit && charss[start] > 0) {
            int next = start - 1;
            while (next >= 0 && charss[next] == 0) {
                next--;
            }

            if (next < 0) break; 

            ans += (char)('a' + next);
            charss[next]--;
            prev = true; 
        }
    }

    return ans;
}
};