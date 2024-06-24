class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        int n=nums2.size();
        st.push(-1);
        vector<int>temp=nums2;
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--)
        {
            if(!st.empty() && st.top()>nums2[i])
            {
                ans[i]=st.top();
                st.push(nums2[i]);
            }
            else
            {
                while(!st.empty()&& st.top()<nums2[i])
                st.pop();
                if(st.empty())
                ans[i]=-1;
                else
                ans[i]=st.top();
                st.push(nums2[i]);
            }
        }
        int n2=nums1.size();
        vector<int>fans(n2);
        for(int i=0;i<n2;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(nums1[i]==temp[j])
                {
                    fans[i]=ans[j];
                }
            }
        }
        return fans;
    }
};