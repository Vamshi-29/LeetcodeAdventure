class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum=0;
        for(auto it:rolls)
        sum+=it;
        int len=rolls.size();
        int reqsum=(len+n)*mean;
        cout<<reqsum<<endl;
        reqsum-=sum;
        vector<int>ans;
        int cnt=n;
        if(reqsum > n*6)
        return {};
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=6;j++){
                if(reqsum-j <= (cnt-1)*6)
                {
                    reqsum=reqsum-j;
                    ans.push_back(j);
                    cnt--;
                    break;
                }
            }       
        }
        if(reqsum==0)
        return ans;
        return {};
    }
};