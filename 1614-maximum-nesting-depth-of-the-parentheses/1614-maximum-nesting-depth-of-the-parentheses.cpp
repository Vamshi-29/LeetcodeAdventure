class Solution {
public:
    int maxDepth(string s) {
        int open = 0;
        int maxopen = 0;
        for(auto it:s)
        {
            if(it=='(')
            {
                open ++ ;
            }
            else if(it==')')
            {
                open -- ;
            }

            maxopen = max(maxopen , open);
        }

        return maxopen;


    }
};