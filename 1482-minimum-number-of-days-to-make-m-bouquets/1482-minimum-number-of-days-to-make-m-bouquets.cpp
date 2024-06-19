#include <vector>
#include <limits>
using namespace std;

class Solution {
public:
    long long findmini(vector<int>& arr) {
        long long mini = LLONG_MAX;
        for (int i = 0; i < arr.size(); i++)
            mini = min(static_cast<long long>(arr[i]), mini);
        return mini;
    }

    long long findmaxi(vector<int>& arr) {
        long long maxi = LLONG_MIN;
        for (int i = 0; i < arr.size(); i++)
            maxi = max(static_cast<long long>(arr[i]), maxi);
        return maxi;
    }

    long long findpossi(vector<int>& arr, int m, int k, long long mid) {
        long long cnt = 0;
        long long sol = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= mid)
                cnt++;
            else {
                sol += (cnt) / k;
                cnt = 0;
            }
        }
        sol += (cnt) / k; 
        return sol;
    }

    long long bsearch(vector<int>& arr, int m, int k, long long mini, long long maxi) {
        long long start = mini;
        long long end = maxi;
        long long ans = -1; 
        while (start <= end) {
            long long mid = start + (end - start) / 2;
            long long sol1 = findpossi(arr, m, k, mid);
            if (sol1 >= m) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }

    long long minDays(vector<int>& arr, int m, int k) {
        if (static_cast<long long>(m) * static_cast<long long>(k) > arr.size())
            return -1;
        long long mini = findmini(arr);
        long long maxi = findmaxi(arr);
        return bsearch(arr, m, k, mini, maxi);
    }
};

