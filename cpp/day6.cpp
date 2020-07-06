class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 0;
        int addone = 1;
        for (int i = n - 1; i >= 0; i--) {
            digits[i] += (addone + carry);
            carry = 0;
            if (digits[i] >= 10) {
                carry = 1;
                digits[i] %= 10;
            }
            if (addone)
                addone = 0;
        }
        
        if (carry) {
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};
