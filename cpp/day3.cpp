class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        N%= 14;
        if (!N) N = 14;
        for (int i = 0; i < N; i++) {
            vector<int> temp = vector<int>(cells);
            for (int j = 1; j < 7; j++) {
                cells[j] = !(temp[j - 1] ^ temp[j + 1]);
            }
            if (i == 0) {
                cells[0] = cells[7] = 0;
            }
        }
        return cells;
    }
};
