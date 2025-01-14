class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int>um1,um2;
        int n=A.size();
        vector<int>ans(n,0);
        if(A[0]==B[0])
        ans[0]=1;
        um1[A[0]]=0;
        um2[B[0]]=0;
        for(int i=1;i<n;i++)
        {
            um1[A[i]]=i;
            um2[B[i]]=i;
            if(A[i]==B[i])
            ans[i]=ans[i-1]+1;
            else if(um1.find(B[i])!=um1.end() && um2.find(A[i])!=um2.end())
            ans[i]=ans[i-1]+2;
            else
            {
                if(um1.find(B[i])==um1.end() && um2.find(A[i])==um2.end())
                ans[i]=ans[i-1];
                else
                ans[i]=ans[i-1]+1;
            }
        }
        return ans;
    }
};