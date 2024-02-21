class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int start=0;
            int end=n-1;
            while(start<=end)
            {
                int mid=(start)+(end-start)/2;
                if(arr[mid]==2*arr[i] && mid!=i)
                return true;
                else if(arr[mid] > 2*arr[i])
                end=mid-1;
                else
                start=mid+1;
            }
        }
        return false;
    }
};