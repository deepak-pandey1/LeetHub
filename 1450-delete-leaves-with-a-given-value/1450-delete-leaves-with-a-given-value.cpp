class Solution {
public:
    bool checkLeaves(TreeNode* root){
        if(root == NULL) return false;
        return (root->left == NULL && root->right == NULL);
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(root == NULL) return NULL;

        root->left = removeLeafNodes(root->left, target);
        root->right = removeLeafNodes(root->right, target);

        if(checkLeaves(root) && root->val == target){
            // delete root;
            return NULL;
        }
        return root;
    }
};