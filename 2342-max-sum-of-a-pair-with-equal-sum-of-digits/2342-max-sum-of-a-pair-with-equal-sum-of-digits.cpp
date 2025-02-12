class Solution {
public:
    int findsum(int num)
    {
        int sum = 0;
        while(num)
        {
            sum = sum + num%10;
            num = num /10;
        }

        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int>um;
        int maxans = -1;
        for(auto it:nums)
        {
            int obtainedsum = findsum(it);
            if(um.find(obtainedsum)!=um.end())
            {
                int result = um[obtainedsum] + it;
                maxans = max(maxans,result);
                if(it > um[obtainedsum])
                um[obtainedsum] = it;
            }
            else
            {
                um[obtainedsum] = it;
            }
        }
        return maxans;

    }
};