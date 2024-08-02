class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int onecnt=0,end=0;
        int start=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]){
            onecnt++;
            start=i;
            }
        }
        if(onecnt==0 || onecnt==1 || onecnt==n-1)
        return 0;
        cout<<onecnt<<endl;
        int placestart=start+onecnt-1;
        if(placestart<n)
        end=placestart;
        else
        {
           int diff=(n-start);
           end=(onecnt-diff-1);
        } 
        cout<<start<<" "<<end<<" "<<endl; 
        int tempstart=start;
        int bwone=0;
        while(tempstart!=end)
        {
            if(tempstart==n)
            tempstart=0;
            if(nums[tempstart])
            bwone++;
            if(tempstart==end)
            break;
            tempstart++;
        }
        if(nums[end]==1)
        bwone++;
        int minswap=INT_MAX;
        int startagain=start,endagain=end;
       
        while(1)
        {
            int swapsreq=onecnt-bwone;
            minswap=min(minswap,swapsreq);
            if(nums[start]==1)
            bwone--;
            start++;
            if(start==n)
            start=0;
            end++;
            if(end==n)
            end=0;
            if(nums[end]==1)
            bwone++;
            if(start==startagain && end==endagain)
            return minswap;
        }
        // return minswap;

    }
};