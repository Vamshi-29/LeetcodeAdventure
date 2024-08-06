class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt=0;
        for(auto it:details)
        {
            string temp=it;
            if(temp[11]-'0'>=6)
            cnt++;
        }
        return cnt;

    }
};