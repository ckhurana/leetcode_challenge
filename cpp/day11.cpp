class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        for (int i = 0; i < pow(2, nums.size()); i++) {
            vector<int> s;
            for (int j = 0; j < nums.size(); j++) {
                if ((1 << j) & i) {
                    s.push_back(nums[j]);
                }
            }
            ans.push_back(s);
        }
        return ans;
    }
};
