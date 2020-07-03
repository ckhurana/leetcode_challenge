class Solution {
public:
    int arrangeCoins(int n) {
        unsigned int num = (unsigned int)n * 2;
        return static_cast<int> (sqrt(num + 0.25) - 0.5);
    }
};
