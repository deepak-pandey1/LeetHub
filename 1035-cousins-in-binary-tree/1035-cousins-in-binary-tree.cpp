class Solution {
public:
    int depth(TreeNode* root, int target, int level){
        if(root == NULL) return 0;

        if(target == root->val) return level;

        int left = depth(root->left, target, level+1);
        int right = depth(root->right, target, level+1);

        return (left != 0) ? left : right;
    }
    bool checkSameParents(TreeNode* root, int x, int y){
        if(root == NULL) return true;

        if(root->left && root->right){
            if((root->left->val == x && root->right->val == y) || 
               (root->left->val == y && root->right->val == x)){
                return false;
            }
        }

        bool ans1 = checkSameParents(root->left, x, y);
        bool ans2 = checkSameParents(root->right, x, y);

        return (ans1 && ans2);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root == NULL) return false;

        int xHeight = depth(root, x, 0);
        int yHeight = depth(root, y, 0);

        if(xHeight != yHeight) return false;

        return checkSameParents(root, x, y);
    }
};