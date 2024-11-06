class Solution {
    public boolean isCircularSentence(String sentence) {
        char firstchar=sentence.charAt(0);
        char lastchar=sentence.charAt(0);
        int n = sentence.length();
        for(int i=0;i<n;i++)
        {
            if(sentence.charAt(i)==' ')
            {
                if(i!=n-1 && sentence.charAt(i+1)!=lastchar)
                return false;
                continue;
            }
            lastchar=sentence.charAt(i);
        }
        if(lastchar!=firstchar)
        return false;
        return true;
    }
}