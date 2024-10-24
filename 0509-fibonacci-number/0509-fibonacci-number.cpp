class Solution {
public:
    int fib(int n) {
        int prev=0,curr=1;
        if(n==0 || n==1)
        return n;
        for(int i=1;i<n;i++)
        {
            int next=prev+curr;
            prev=curr;
            curr=next;
        }
        return curr;
    }
};