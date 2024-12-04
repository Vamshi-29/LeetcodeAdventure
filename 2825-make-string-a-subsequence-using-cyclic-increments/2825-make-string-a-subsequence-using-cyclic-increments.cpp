class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
       int start1=0,start2=0;
       while(start1<str1.length() && start2<str2.length())
       {
        if(str1[start1]==str2[start2])
        {
            start1++;
            start2++;
        }
        else
        {
            char next;
            if(str1[start1]=='z')
            next='a';
            else
            next = str1[start1] + 1;
            if(next==str2[start2])
            {
                start1++;
                start2++;
            }
            else
            start1++;
        }
       }
       if(start2==str2.length())
       return true;
       return false;
    }
};