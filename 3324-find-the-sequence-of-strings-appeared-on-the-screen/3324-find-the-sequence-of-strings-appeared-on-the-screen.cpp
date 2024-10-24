class Solution {
public:
    vector<string> stringSequence(string target) {
        int start2 = 0;
        vector<string> ans;
        ans.push_back("a");

        while (1) {
            string last = ans.back();
            if(start2==target.length()-1 && last[start2]==target[start2])
            break;
            if (last[start2] == target[start2]) {
                last += 'a';
                ans.push_back(last);
                start2++;
            } else {
                last[start2] = last[start2] + 1;
                ans.push_back(last);
            }
        }
        return ans;
    }
};
