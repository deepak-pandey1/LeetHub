class Solution {
public:
    int sum = 0;

    void rangeSum(TreeNode* root, int low, int high) {
        if (root == NULL) return;

        // If the current node is in the range, add its value
        if (root->val >= low && root->val <= high)
            sum += root->val;
            
        // Only go left if there's a chance smaller values are in range
        if (root->val > low)
            rangeSum(root->left, low, high);


        // Only go right if there's a chance larger values are in range
        if (root->val < high)
            rangeSum(root->right, low, high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        rangeSum(root, low, high);
        return sum;
    }
};
