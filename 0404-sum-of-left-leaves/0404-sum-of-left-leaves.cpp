class Solution {
public:
    int ans = 0;
    bool checkLeaves(TreeNode* root){
        if(root == NULL) return true;

        if(root->left == NULL && root->right == NULL)
            return true;

        checkLeaves(root->left);
        checkLeaves(root->right);
        return false;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL) return 0;

        if(root->left != NULL && checkLeaves(root->left))
            ans += root->left->val;

        sumOfLeftLeaves(root->left);
        sumOfLeftLeaves(root->right);

        return ans;
    }
};