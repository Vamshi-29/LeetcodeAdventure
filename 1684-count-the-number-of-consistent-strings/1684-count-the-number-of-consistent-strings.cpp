class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> st;
        for (auto ch : allowed) {
        st.insert(ch);      
        }
        int cnt=0;
        for(int i=0;i<words.size();i++)
        {
            string temp=words[i];
            cnt++;
            for(auto it:temp)
            {
                if(st.find(it)==st.end())
                {
                    cnt--;
                    break;
                }
            }
        }
        return cnt;
    }
};