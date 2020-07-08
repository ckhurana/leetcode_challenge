class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            if(i != 0 && nums[i] == nums[i - 1])
                continue;
            int s = i + 1, e = n - 1;
            int a = nums[i];
            while (s < e) {
                if (a + nums[s] + nums[e] == 0) {
                    vector<int> v{a, nums[s], nums[e]};
                    ans.push_back(v);
                    int prev_s = s;
                    while (s < e && nums[s] == nums[prev_s]) {
                        s++;
                    }
                } else if (a + nums[s] + nums[e] < 0) {
                    s++;
                } else {
                    e--;
                }
            }
        }
        return ans;
    }
};
