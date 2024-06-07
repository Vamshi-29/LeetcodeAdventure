class Solution {
public:
string replaceWords(vector<string>& dictionary, string sentence) {
    unordered_map<string, int> um;
    int n = dictionary.size();
    for(int i = 0; i < n; i++)
        um[dictionary[i]]++;

    string fans;
    string temp, wordd;
    n = sentence.length();
    int flag = 0;

    for(int i = 0; i < n; i++) {
        temp = temp + sentence[i];
        if(um.find(temp) != um.end() && flag == 0) {
            flag = 1;
            wordd = temp;
            wordd = wordd + ' ';
        } else if(sentence[i] == ' ') {
            if(flag == 1)
                fans = fans + wordd;
            else
                fans = fans + temp;
            flag = 0;
            temp.clear();
        }
    }
    if(flag == 1){
        fans = fans + wordd;
        return fans.substr(0,fans.length()-1);
    }
    else{
        fans = fans + temp;
        return fans.substr(0,fans.length());
    }
}

};