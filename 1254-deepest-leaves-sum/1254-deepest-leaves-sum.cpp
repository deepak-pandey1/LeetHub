class Solution {
public:
    int level = 0;
    int ans = 0;
    void maxLevel(TreeNode* root, int lvl){
        if(root == NULL) return;

        if(root->left == NULL && root->right == NULL)
            level = max(level, lvl);

        maxLevel(root->left, lvl+1);
        maxLevel(root->right, lvl+1);
    }
    void leavesSum(TreeNode* root, int lvl){
        if(root == NULL) return;

        if(root->left == NULL && root->right == NULL && (lvl == level))
            ans += root->val;

        leavesSum(root->left, lvl+1);
        leavesSum(root->right, lvl+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        maxLevel(root, 0);
        leavesSum(root, 0);

        return ans;
    }
};