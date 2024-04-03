// class Solution {
// public:
//     int treeHeight(TreeNode* root){
//         if(!root)return 0;
//         else {
//             int leftHeight = treeHeight(root->left);
//             int rightHeight = treeHeight(root->right);
//             return 1 + max(leftHeight, rightHeight);
//         }
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         if (!root) return 0;
//         int diaRoot = treeHeight(root -> left) + treeHeight(root -> right); // Correction here
//         int diaL = diameterOfBinaryTree(root -> left);
//         int diaR = diameterOfBinaryTree(root -> right);
//         return max(diaRoot, max(diaL, diaR));
//     }
// };

class Solution {
public:
    int ans=0;
    int util(TreeNode* root){
        if(!root)return 0;
        int hl = util(root->left);
        int hr = util(root->right);
        ans=max(ans,hl+hr);
        return max(hl,hr)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        util(root);
        return ans;
    }
};