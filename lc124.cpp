class Solution {
public:
    int ans = INT_MIN;
    int sum(TreeNode* root) {
        if(!root)return 0;
        int lsum=sum(root->left);
        int rsum=sum(root->right);
        int temp = max(root->val,max(root->val + lsum,root->val + rsum));
        ans = max(root->val + lsum + rsum,max(ans,temp));
        return temp;
    }
    int maxPathSum(TreeNode* root) {
        if(!root)return 0;
        sum(root);
        return ans;
    }
};