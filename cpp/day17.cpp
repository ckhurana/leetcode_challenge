class compareops {
public:
    bool operator() (pair<int, int> a, pair<int, int> b) {
        return a.second < b.second ? true : false;
    }  
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            if(mp.find(nums[i]) != mp.end()) {
                mp[nums[i]]++;
            } else {
                mp.insert(make_pair(nums[i], 1));
            }
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, compareops> pq(mp.begin(), mp.end());
        
        vector<int> ans;
        while(k-- && !pq.empty()) {
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;
    }
};
