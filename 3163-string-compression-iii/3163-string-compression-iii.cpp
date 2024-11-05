#include <string>
using namespace std;

class Solution {
public:
    string compressedString(string word) {
        string comp;
        int n = word.length();
        
        if (n == 0) return comp;  

        int cnt = 1;  

        
        for (int i = 1; i <= n; i++) {
            
            if (i < n && word[i] == word[i - 1]) {
                cnt++;
               
                if (cnt == 9) {  
                    comp += to_string(cnt) + word[i - 1];
                    cnt = 0;
                }
            } else {
                if(cnt!=0)
                comp += to_string(cnt) + word[i - 1];
                cnt = 1;  
            }
        }

        return comp;
    }
};
