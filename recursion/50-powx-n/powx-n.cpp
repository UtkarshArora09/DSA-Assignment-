class Solution {
public:
    double myPow(double x, int n) {
        long long m = n;  // Convert to long long to safely handle INT_MIN
        double ans = 1.0;

        if (m < 0) {
            x = 1 / x;
            m = -m;
        }

        while (m > 0) {
            if (m % 2 == 1) {
                ans *= x;
            }
            x *= x;
            m /= 2;
        }

        // Handle underflow explicitly
        if (fabs(ans) < 1e-308) return 0.0;

        return ans;
    }
};