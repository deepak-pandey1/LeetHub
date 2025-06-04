class Solution {
public:
    TreeNode* insert(TreeNode*&root, int val) {
        if(root == NULL) {
            root = new TreeNode(val);
            return root;
        }

        if(root->val < val)
            insert(root->right, val);
        else
            insert(root->left, val);
        
        return root;
    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {
        insert(root, val);
        return root;
    }
};