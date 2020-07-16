class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1.0;
        } else if (n > 0) {
            return pow(x, n);
        } else {
            double a = pow(1.0/x, abs(n));
            return isinf(a) ? 0.0 : a;
        }
    }
};
