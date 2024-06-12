class Solution {
public:
    void combi3(vector<vector<int>>&fans,vector<int>&temp,vector<int>&available,int index,int k,int n,vector<int>numbers){
    if(temp.size()==k)
    {
        int sum=0;
        for(int i=0;i<k;i++)
        sum=sum+temp[i];
        if(sum==n)
        fans.push_back(temp);
        return ;
    }
    for(int i=index;i<10;i++)
    {
        if(available[i])
        {
            temp.push_back(numbers[i]);
            available[i]=0;
            combi3(fans,temp,available,i+1,k,n,numbers);
            available[i]=1;
            temp.pop_back();
        }
    }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>numbers(10,0);
        for(int i=1;i<=9;i++)
        numbers[i]=i;
        vector<int>temp;
        vector<int>available(10,1);
        vector<vector<int>>fans;
        combi3(fans,temp,available,1,k,n,numbers);
        return fans;

    }
};