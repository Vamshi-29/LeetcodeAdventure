class Solution {
public:
    string convert(int num){
        string str;
        while(num)
        {
            int rem=num%2;
            if(rem)
                str="1"+str;
            else
                str="0"+str;
            num=num/2;
        }
        return str;
    }
    string convertDateToBinary(string date) {
        int year=stoi(date.substr(0,4));
        int month=stoi(date.substr(5,2));
        int day=stoi(date.substr(8,2));
        string ans=convert(year)+"-"+convert(month)+"-"+convert(day);
        return ans;
    }
};