class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n=profit.size();
        
        vector<pair<int, int>> paired;
        
        for (size_t i = 0; i < n ; ++i) {
        paired.push_back(make_pair(difficulty[i], profit[i]));
        }
        
        sort(paired.begin(), paired.end());
       
        for (size_t i = 0; i < paired.size(); ++i) {
        difficulty[i] = paired[i].first;
        profit[i] = paired[i].second;
        }

        sort(worker.begin(),worker.end());

        int ans=0,maxans=0;
        int start1=0,start2=0;

        while(start1<n && start2<worker.size())
        {
            while(start1<n && difficulty[start1]<=worker[start2])
            {
                maxans=max(maxans,profit[start1]);
                start1++;
            }
                ans=ans+maxans;
                start2++;
        
        }
        return ans;
    
    }
};