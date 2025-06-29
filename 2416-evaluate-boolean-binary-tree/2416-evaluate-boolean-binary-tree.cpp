class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if(root == NULL) return false;

        if(root->left == NULL && root->right == NULL) return root->val;

        bool ans1 = evaluateTree(root->left);
        bool ans2 = evaluateTree(root->right);

        return (root->val == 2) ? (ans1 || ans2) : (ans1 && ans2);
    }
};