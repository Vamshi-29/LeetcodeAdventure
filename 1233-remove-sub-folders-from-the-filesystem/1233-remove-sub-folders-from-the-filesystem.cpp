#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        
        sort(folder.begin(), folder.end());
        
        vector<string> ans;
        ans.push_back(folder[0]);  
        
        for (int i = 1; i < folder.size(); i++) {
            string prev = ans.back();
            int len = prev.length();
            
            if (!(prev == folder[i].substr(0, len) && folder[i].length() > len && folder[i][len] == '/')) {
                ans.push_back(folder[i]);
            }
        }
        
        return ans;
    }
};
