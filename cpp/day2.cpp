/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    unordered_map<int, vector<int>> m;
    int maxx = -1;

public:
    void traverse(TreeNode* n, int l) {
        if (n == NULL)
            return;
        if (l > maxx)
            maxx = l;
        traverse(n->left, l+1);
        traverse(n->right, l+1);
        if (m.find(l) == m.end())
            m.insert(make_pair(l, vector<int>()));
        m[l].push_back(n->val);
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        traverse(root, 0);
        vector<vector<int>> ans(m.size());
        for (int i =m.size() -1; i >= 0; i--) {
            ans[m.size() - 1- i] = m[i];
        }
        printf("%d %lu", maxx, m.size());
        return ans;
    }
};
