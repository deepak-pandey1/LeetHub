class Solution {
public:
    bool checkValue(TreeNode* root, int target){
        if(root == NULL) return true;

        if(target != root->val) return false;

        bool ans1 = checkValue(root->left, target);
        bool ans2 = checkValue(root->right, target);

        return (ans1 && ans2);
    }

    bool isUnivalTree(TreeNode* root) {
        if(root == NULL) return true;

        return checkValue(root, root->val);
    }
};