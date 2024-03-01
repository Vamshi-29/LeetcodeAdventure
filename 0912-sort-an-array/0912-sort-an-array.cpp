class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
         priority_queue<int,vector <int>,greater<int>> pq;
    
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            pq.push(nums[i]);
        }
        vector<int>nums2(n);
        int i=0;
        while(!pq.empty())
        {
            nums2[i]=(pq.top());
            pq.pop();
            i++;
        }
        return nums2;
    }
};