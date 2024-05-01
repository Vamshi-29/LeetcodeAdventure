class Solution {
public:
    string reversePrefix(string word, char ch) {
        int flag=0;
        int n=word.size();
        string ans;
        for(int i=0;i<n;i++)
        {
            if(word[i]==ch && flag==0)
            {
                flag=1;
                ans=word[i]+ans;
            }
            else if(flag==0)
            {
                ans=word[i]+ans;
            }
            else
            ans=ans+word[i];
        }
        if(flag==0)
        return word;
        return ans;
    }
};