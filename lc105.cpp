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
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int preS, int preE, int inS, int inE) {
        if (preS > preE || inS > inE) return nullptr;
        TreeNode* root = new TreeNode(preorder[preS]);
        int i = inS, cnt = 0;
        for (; inorder[i] != preorder[preS]; i++) cnt++;
        root->left = solve(preorder, inorder, preS + 1, preS + cnt, inS, i - 1);
        root->right = solve(preorder, inorder, preS + cnt + 1, preE, i + 1, inE);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        if (n == 0) return nullptr;
        return solve(preorder, inorder, 0, n - 1, 0, n - 1);
    }
};