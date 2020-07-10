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
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, int>> q;
        if(!root)
            return 0;
        q.push(make_pair(root, 0));
        int mx = 1;
        while(!q.empty()) {
            int width = q.size();
            int start = q.front().second, end = q.back().second;
            mx = max(mx, end - start + 1);
            while (width--) {
                TreeNode *p = q.front().first;
                int idx = q.front().second - start;
                q.pop();
                if (p->left)
                    q.push(make_pair(p->left, 2 * idx + 1));
                if (p->right)
                    q.push(make_pair(p->right, 2 * idx + 2));
            }
        }
        return mx;
    }
};
