class Solution {
public:
    long min1 = LONG_MAX, min2 = LONG_MAX;
    void dfs(TreeNode* root) {
        if (!root) return;

        if (root->val < min1) {
            min2 = min1;
            min1 = root->val;
        } else if (root->val > min1 && root->val < min2) {
            min2 = root->val;
        }

        dfs(root->left);
        dfs(root->right);
    }

    int findSecondMinimumValue(TreeNode* root) {
        dfs(root);
        return (min2 == LONG_MAX) ? -1 : (int)min2;
    }
};
