class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream stream(sentence);
        string word;

        int index=1;
        int slen=searchWord.length();
        while(stream >> word){
            if(word.substr(0,slen)==searchWord)
            return index;

            index++;
        }


        return -1;
    }
};