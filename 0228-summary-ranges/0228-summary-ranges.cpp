class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        string start=" ";
        for(int i=0;i<nums.size();i++)
        {
            if(start==" ")
            start=to_string(nums[i]);
            if(i!=nums.size()-1 && nums[i]!=nums[i+1]-1)
            {
                if(start!=" " && start!=to_string(nums[i]))
                {
                    ans.push_back(start+"->"+to_string(nums[i]));
                    // start=" ";
                }
                else
                ans.push_back(to_string(nums[i]));
                start=" ";
            }
            if(i==nums.size()-1)
            {
                if(start!=" " && start!=to_string(nums[i]))
                {
                    ans.push_back(start+"->"+to_string(nums[i]));
                    // start=" ";
                }
                else
                ans.push_back(to_string(nums[i]));
                start=" ";
            }
        }
        return ans;
    }
};