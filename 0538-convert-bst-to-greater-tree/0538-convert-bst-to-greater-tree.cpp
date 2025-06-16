class Solution {
public:
    int sum = 0;
    void convert(TreeNode* root) {
        if (root == NULL) return;

        convert(root->right);          // Step 1: Traverse right (greater values)
        sum += root->val;              // Step 2: Update running sum
        root->val = sum;               // Step 3: Replace current node with sum
        convert(root->left);           // Step 4: Traverse left (smaller values)
    }
    TreeNode* convertBST(TreeNode* root) {
        convert(root);
        return root;
    }
};