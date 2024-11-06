class Solution {
    int samebits(int num)
    {
        int cnt=0;
        while(num!=0)
        {
            if((num&1)==1)
            cnt++;
            num=num/2;
        }
        return cnt;
    }
    public boolean canSortArray(int[] nums) {
        int n=nums.length;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(nums[j]>nums[j+1] && samebits(nums[j])==samebits(nums[j+1]))
               {
                    int temp=nums[j+1];
                    nums[j+1]=nums[j];
                    nums[j]=temp;
               }
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            return false;
        }
        return true;

    }
}