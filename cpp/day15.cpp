class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int b = -1, e = s.size();
        while (e >= 0 && (e = s.find_last_not_of(' ', e)) >= 0) {
            b = s.find_last_of(' ', e) + 1;
            ans += (s.substr(b, e - b + 1) + " ");
            e = b - 1;
        }
        int asize = ans.size();
        if (asize > 0 && ans[asize - 1] == ' ')
            ans = ans.erase(asize - 1, 1);
        return ans;
    }
};
