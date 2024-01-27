class Solution {
public:
    int maximum69Number (int num) {
        int temp=num;
        int i=0,posi=-1;
        while(temp)
        {
            int rem=temp%10;
            if(rem==6)
            posi=i;
            i++;
            temp=temp/10;
        }
        int ans=0;
        if(posi!=-1){
        ans=pow(10,posi);
        ans=ans*3;
        }
        num=num+ans;
        return num;
    }
};