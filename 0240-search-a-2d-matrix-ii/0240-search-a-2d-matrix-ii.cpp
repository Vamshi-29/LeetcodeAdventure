class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int colsize=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            int start=0,end=colsize-1;
            while(start<=end)
            {
                int mid=(start+end)/2;
                if(matrix[i][mid]==target)
                return true;
                if(matrix[i][mid]>target)
                end=mid-1;
                else
                start=mid+1;
            }
        }
        return false;
    }
};