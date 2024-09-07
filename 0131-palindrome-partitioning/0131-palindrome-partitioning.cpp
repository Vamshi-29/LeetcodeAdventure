class Solution {
public:
    bool ispalindrome(string str)
    {
        int start=0,end=str.length()-1;
        while(start<=end)
        {
            if(str[start]!=str[end])
            return false;
            start++;
            end--;
        }
        return true;
    }
    vector<vector<string>>fans;
    void getans(string s,int index,int n,vector<string>&temp)
    {
        if(index==n)
        {
            fans.push_back(temp);
            return ;
        }
        string str;
        for(int i=index;i<n;i++)
        {
            str=str+s[i];
            if(ispalindrome(str))
            {
                temp.push_back(str);
                getans(s,i+1,n,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        getans(s,0,s.length(),temp);
        return fans;
    }
};