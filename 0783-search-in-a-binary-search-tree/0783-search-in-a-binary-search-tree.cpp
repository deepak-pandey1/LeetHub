class Solution {
public:
    TreeNode* search(TreeNode*&root, int val){
        if(root == NULL) return NULL;

        if(root->val == val) return root;

        if(root->val > val)
            return search(root->left, val);
        else
            return search(root->right, val);

        return root;
    }

    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans = search(root, val);
        return ans;
    }
};