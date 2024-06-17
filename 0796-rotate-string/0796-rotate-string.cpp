class Solution {
public:
    bool rotateString(string s, string goal) {
        string s1,goal1;
        int n=s.length();
        int start=0,end=s.length()-1,flag=1;
        if(s.length()!=goal.length())
        return false;
        while(end>=0)
        {
            s1=s1+s[start];
            goal1=goal[end]+goal1;
            if(s1==goal1)
            {
                cout<<s1<<" "<<goal1<<endl;
                flag=0;
                break;
            }
            start++;
            end--;
        }
        if(flag==1)
        return false;
        for(int i=start+1;i<n;i++)
        {
            s1=s1+s[i];
        }
        for(int i=0;i<end;i++)
        {
            goal1=goal1+goal[i];
        }
        cout<<s1<<" "<<goal1<<endl;
        return s1==goal1;
    }
};