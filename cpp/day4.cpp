class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> a(n);
        a[0] = 1;
        int n2 = 2, n3 = 3, n5 = 5;
        int i2 = 0, i3 = 0, i5 = 0;
        for (int i = 1; i < n; i++) {
            int n1 = min(n2, min(n3, n5));
            a[i] = n1;
            if (n1 == n2) {
                i2++;
                n2 = a[i2] * 2;
            }
            
            if (n1 == n3) {
                i3++;
                n3 = a[i3] * 3;
            }
            
            if (n1 == n5) {
                i5++;
                n5 = a[i5] * 5;
            }
        }
        return a[n-1];
    }
};
