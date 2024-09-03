class Solution {
public:
    int colordecider(char ch1,string coordinate1)
    {
        int first_color=0;
         if(ch1=='a' || ch1=='c' || ch1=='e' || ch1=='g')
        {
            int num=coordinate1[1]-'0';
            if(num&1)
            {
                first_color=1;
            }
            else
            {
                first_color=0;
            }
        }
        else
        {
            int num=coordinate1[1]-'0';
            if(num&1)
            {
                first_color=0;
            }
            else
            {
                first_color=1;
            }
        }
        return first_color;
    }
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        char ch1=coordinate1[0];
        char ch2=coordinate2[0];
        int one=colordecider(ch1,coordinate1);
        int two=colordecider(ch2,coordinate2);
        return one==two;
    }
};