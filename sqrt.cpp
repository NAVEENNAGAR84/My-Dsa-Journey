class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;
        int ans = 0;

        long long l = 0;
        long long h = x / 2;
        while (l <= h) {
            long long mid = l + (h - l) / 2;
            if (mid * mid <= x) {
                ans = mid;
                l = mid + 1;

            } else {
                h = mid - 1;
            }
        }
        return ans;
    }

};