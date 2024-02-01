class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
        int n=pushed.size();
        int i=0,j=0;
        while(i<n){
            while(!s.empty() && s.top()==popped[j])
            {
                s.pop();
                j++;
            }
            s.push(pushed[i]);
            i++;
        }
        while(!s.empty() && s.top()==popped[j])
        {
            s.pop();
            j++;
        }
        if(!s.empty())
        return false;
        return true;    
    }
};