class Solution {
public:
   string removeOccurrences(string s, string part) {
    int slen = s.length();
    int plen = part.length();
    if (plen > slen)
        return s;

    stack<char> st;
    int i = 0;

    for (i = 0; i < plen-1; i++) {
        st.push(s[i]);
    }

    while (i < slen) {
        int end = plen - 1;
        int cnt = 0;
         st.push(s[i]);
        while (end >= 0 && !st.empty() && st.top() == part[end]) {
            st.pop();
            end--;
            cnt++;
        }

        if (cnt != plen) {
            for (int p = plen - cnt; p < plen; p++) {
                st.push(part[p]);
            }
        }

       
        i++;
    }

   
    string ans;
    while (!st.empty()) {
        ans = st.top() + ans;
        st.pop();
    }

    return ans;
}

};