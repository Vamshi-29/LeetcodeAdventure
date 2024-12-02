class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int flag=1,n=sentence.length();
        int slen=searchWord.length();
        int cnt=1;
        for(int i=0;i<n;i++)
        {
            if(flag==1)
            {
               string temp = sentence.substr(i,slen);
               if(temp==searchWord)
               return cnt;
            }
            if(sentence[i]==' '){
                flag=1;
                cnt++;
            }
            else
            flag=0;
        }
        return -1;
    }
};