class Solution {
public:
    bool solve(TreeNode* root, int targetSum, int sum ) {
        if(root == NULL) return false;

        sum += root->val;
        if(root->left == NULL && root->right == NULL)
            return (sum == targetSum) ? true : false;
        
        bool leftAns = solve(root->left, targetSum, sum);
        bool rightAns = solve(root->right,targetSum, sum);
        
        return leftAns || rightAns;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans = solve(root, targetSum, 0);
        return ans;
    }
};