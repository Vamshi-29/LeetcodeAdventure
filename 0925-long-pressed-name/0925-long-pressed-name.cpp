class Solution {
public:
    bool isLongPressedName(string name, string typed) {
    int start1 = 0, start2 = 0;
    
    while (start2 < typed.length()) {
        if (start1 < name.length() && name[start1] == typed[start2]) {
            start1++;
            start2++;
        } 
        else if (start2 > 0 && typed[start2] == typed[start2 - 1]) {
            start2++;
        } 
        else {
            return false;
        }
    }
    
    return start1 == name.length();
}

};