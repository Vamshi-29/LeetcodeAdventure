class Solution {
public:
    bool validparti(string str)
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
    void palinpartion(string s,int index,int n,vector<vector<string>>&fans,vector<string>&temp)
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
            if(validparti(str)){
            temp.push_back(str);
            palinpartion(s,i+1,n,fans,temp);
            temp.pop_back();
            }
        }
        
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        vector<vector<string>>fans;
        palinpartion(s,0,s.length(),fans,temp);
        return fans;
    }
};