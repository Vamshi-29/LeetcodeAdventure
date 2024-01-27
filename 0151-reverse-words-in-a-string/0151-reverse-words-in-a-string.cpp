class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string temp;
        string result;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=' ')
            temp=s[i]+temp;
            else if(i>0 && s[i]==' ' && s[i-1]!=' ')
            {
                if(result.length()==0)
                result=result+temp;
                else
                result=result+" "+temp;
                temp.clear();
            }
        }
        if(result.length()==0)
        result=result+temp;
        else
        result=result+" "+temp;
        return result;
    }
};