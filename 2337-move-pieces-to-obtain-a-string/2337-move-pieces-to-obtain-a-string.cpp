class Solution {
public:
    bool canChange(string start, string target) {
        int start1=0,start2=0;
        while (start1 < start.length() && start2 < target.length()) {
        while (start1 < start.length() && start[start1] == '_') start1++;
        while (start2 < target.length() && target[start2] == '_') start2++;

        
        if (start1 == start.length() || start2 == target.length())
            return start1 == start.length() && start2 == target.length();

        
        if (start[start1] != target[start2])
            return false;

        if (start[start1] == 'L' && start2 > start1) 
            return false; 
        if (start[start1] == 'R' && start2 < start1) 
            return false; 

       
        start1++;
        start2++;
    }
    return true;
    }
};