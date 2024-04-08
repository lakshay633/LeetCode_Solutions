class Solution {
public:
typedef TreeNode node; 
    vector<int> inorderTraversal(TreeNode* root) {
    vector<int> ans;
    if (root == nullptr)return ans;

    stack<node*> st;
    node* curr = root;

    while (curr != nullptr || !st.empty()) {
        while (curr != nullptr) {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        ans.push_back(curr->val);
        curr = curr->right;
    }
    return ans;
    }
};