class Solution {
public:
    bool isvowel(char ch)
    {
        ch=tolower(ch);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return true;
        return false;
    }
    bool isdigit(char ch)
    {
        if(ch=='0' || ch=='1' || ch=='2' || ch=='3'|| ch=='4' || ch=='5' || ch=='6' || ch=='7'|| ch=='8' || ch=='9')
        return true;
        return false;
    }
    bool isValid(string word) {
        int charcnt=0;
        int vowel=0,conso=0;
        int n=word.size();
        if(n<3)
        return false;
        for(int i=0;i<n;i++)
        {
            if(isalpha(word[i]))
            {
                if(isvowel(word[i]))
                vowel=1;
                else
                conso=1;
            }
            else if(isdigit(word[i]))
            continue;
            else
            return false;
        }
        if(vowel==1 && conso==1)
        return true;
        return false;
    }
};