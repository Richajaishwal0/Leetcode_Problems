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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root==nullptr) return {};
        queue<TreeNode*>q;
        q.push(root);
        TreeNode * curr;
        vector<vector<int>> ans;
        while (!q.empty())
        {
            vector <int> vec;
            int levelsize=q.size();
            for (int i=0;i<levelsize;i++)
            {
                curr=q.front();
                q.pop();
                vec.push_back(curr->val);
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
            ans.push_back(vec);

        }
        return ans;
    }
};