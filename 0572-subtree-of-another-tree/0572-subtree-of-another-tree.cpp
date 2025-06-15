class Solution {
public:
    bool isSame(TreeNode* root, TreeNode* subRoot){
        if(root == NULL && subRoot == NULL) return true;

        if(root == NULL || subRoot == NULL) return false;
        if(root->val != subRoot->val) return false;

        bool ans1 = isSame(root->left, subRoot->left);
        bool ans2 = isSame(root->right, subRoot->right);

        return (ans1 && ans2);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL) return false;

        if(isSame(root, subRoot))
            return true;

        bool ans1 = isSubtree(root->left, subRoot);
        bool ans2 = isSubtree(root->right, subRoot);

        return (ans1 || ans2);
    }
};