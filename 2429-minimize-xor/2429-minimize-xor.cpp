class Solution {
public:
    int minimizeXor(int num1, int num2) {
    int cnt = 0;
    // Count the number of 1s in num2
    while (num2) {
        if (num2 & 1) 
            cnt++;
        num2 = num2 / 2;
    }

    int nobnum1 = 0; 
    int cp = num1;
    while (cp) {
        if (cp & 1)
            nobnum1++;
        cp = cp / 2;
    }

    int ans = 0;
    for (int i = 31; i >= 0 && cnt > 0; i--) {
        if (num1 & (1 << i)) { 
            ans |= (1 << i);   
            cnt--;
        }
    }
    for (int i = 0; i < 32 && cnt > 0; i++) {
        if (!(ans & (1 << i))) { 
            ans |= (1 << i);    
            cnt--;
        }
    }
    return ans;
}
};