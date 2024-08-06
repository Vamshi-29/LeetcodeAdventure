class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        vector<int>v(26,0);
        for(int i=0;i<n;i++)
            v[word[i]-'a']++;
        sort(v.begin(),v.end(),greater<int>());
         for(int i=0;i<26;i++)
         {
            cout<<v[i]<<" ";
         }
        int cnt=0,ans=0;
        for(int i=0;i<26;i++)
        {
            if(i%8==0)
                cnt++;
            ans=ans+(cnt*v[i]);
        }
        cout<<endl;
        return ans;
    }
};