class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowsize=matrix.size();
        int colsize=matrix[0].size();
        for(int i=0;i<rowsize;i++)
        {
            int start=0,end=colsize-1;
            while(start<=end)
            {
                int mid=(start+end)/2;
                if(matrix[i][mid]==target)
                return true;
                else if(matrix[i][mid]>target)
                end=mid-1;
                else
                start=mid+1;
            }
        }
        return false;
    }
};