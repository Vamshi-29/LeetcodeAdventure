class Solution {
public:
    int getsol(vector<int>&chalk,int k)
    {
        int n=chalk.size();
        for(int i=0;i<n;i++)
        {
            if(k>=chalk[i])
            {
                k=k-chalk[i];
            }
            else
            return i;
        }
        return 0;
    }
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
        long long int sum=0;
        for(auto it:chalk)
        sum=sum+it;
        if(sum>k)
        {
            return getsol(chalk,k);
        }
        else
        {
            int rem=(k)%(sum);
            if(rem==0)
            return 0;
            return getsol(chalk,rem);
        }
        return 0;
    }
};