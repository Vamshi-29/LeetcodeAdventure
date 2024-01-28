class Solution {
public:
    long long flowerGame(int n, int m) {
        long long int evenm = m/2;
        long long int evenn= n/2;
        long long int oddm=(m-evenm);
        long long int oddn=(n-evenn);
        return (evenm*oddn)+(oddm*evenn);
    }
};