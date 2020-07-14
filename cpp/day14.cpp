class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hm, mx, mn, df1, df2;
        hm = ((hour + ((double)minutes/60)) * 5);
        hm = hm >= 60 ? hm - 60: hm;
        if (hm > minutes) {
            mx = hm;
            mn = minutes;
        } else {
            mx = minutes;
            mn = hm;
        }
        df1 = (mx - mn) * 6;
        df2 = (mn + (60.0 - mx)) * 6;
        return min(df1, df2);
    }
};
