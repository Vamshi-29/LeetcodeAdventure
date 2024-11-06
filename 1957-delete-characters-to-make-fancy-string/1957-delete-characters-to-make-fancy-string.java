class Solution {
    public String makeFancyString(String s) {
        int n=s.length(),cnt=0;
        char prev=s.charAt(0);
        StringBuilder ans = new StringBuilder();
        for(int i=0;i<n;i++)
        {
            if(prev==s.charAt(i))
            {
                cnt++;
            }
            else
            {
                prev=s.charAt(i);
                cnt=1;
            }
            if(cnt>=3)
            {
                continue;
            }
            ans.append(s.charAt(i));
        }
        return ans.toString();
    }
}