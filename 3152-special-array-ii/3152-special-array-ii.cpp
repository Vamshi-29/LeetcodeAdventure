class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        
        int n=nums.size();
        vector<int> v;

        for(int i=1;i<n;i++){
          if(nums[i]%2==nums[i-1]%2)
          v.push_back(i);
        }

        vector<bool> ans;

        for(auto q:queries){
            int i=q[0],j=q[1];

            if(i==j)
            ans.push_back(true);

            else{
                auto it=lower_bound(v.begin(),v.end(),i+1);

                if(it==v.end() || *it>j){
                    ans.push_back(true);
                }

                else ans.push_back(false);
            }
        }

        return ans;
    }
};