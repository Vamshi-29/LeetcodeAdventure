class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n=nums.size(),res=0;
        queue<int> q;
        for(int i=0;i<n;i++){
            // Remove expired flips
            if(!q.empty() && q.front()==i){
                q.pop();
            }
            // Check if flips are possible for the remaining bit
            if(i>n-k){
                if((nums[i]+q.size())%2==0){
                    return -1;
                }
            }
            else if((nums[i]+q.size())%2==0){ //if flips are possible and parity is 0 of arr[i] after flipping
                q.push(i+k); // Record the end index of this flip
                res++; // Increment flip count
            }
            
        }
        return res; // Return the total number of flips performed
    }
};