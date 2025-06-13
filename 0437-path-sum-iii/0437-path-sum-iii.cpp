class Solution {
public:
    int ans = 0;
    void countPathsFromRoot(TreeNode* root, long long targetSum){
        if(root == NULL) return;

        if(root->val == targetSum) ans++;
        countPathsFromRoot(root->left, targetSum - root->val);
        countPathsFromRoot(root->right, targetSum - root->val);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return 0;

        countPathsFromRoot(root, targetSum);
        pathSum(root->left, targetSum);
        pathSum(root->right, targetSum);

        return ans;
    }
};