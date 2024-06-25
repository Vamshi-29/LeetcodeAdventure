class Solution {
public:
    vector<string>ans;
    void getans(int index,string digits,string str)
    {
        if(index==digits.length())
        {
            ans.push_back(str);
            return ;
        }
        for(int i=something ; i<something.length() ; i++ )
        {
            str=str+[i];
            getans(i+1,digits,str);
        }
        return ;
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<string,vector<char>>um;
        um["2"]={'a','b','c'};
        um["2"]={'a','b','c'};
        um["2"]={'a','b','c'};
        um["2"]={'a','b','c'};

    }
};