class Solution {
public:
    int maximumSwap(int num) {
        string numb = to_string(num);
        vector<int> last(10, -1);
        for (int i = 0; i < numb.length(); ++i) {
            last[numb[i] - '0'] = i;
        }
        for (int i = 0; i < numb.length(); ++i) {
            int curr = numb[i] - '0';
            for (int j = 9; j > curr; --j) {
                if (last[j] > i) {
                    swap(numb[i], numb[last[j]]);
                    return stoi(numb);
                }
            }
        }
        return num;
    }
};
