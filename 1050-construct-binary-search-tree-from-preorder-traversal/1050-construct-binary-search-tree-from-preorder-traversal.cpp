class Solution {
public:
    int i = 0;  // Global index to track current position in preorder
    TreeNode* build(vector<int>& preorder, int bound) {
        if (i == preorder.size() || preorder[i] > bound)
            return NULL;

        // Create a new node with current value
        TreeNode* root = new TreeNode(preorder[i++]);

        // Recursively build the left and right subtree
        root->left = build(preorder, root->val);   // Left should be < root->val
        root->right = build(preorder, bound);      // Right should be <= bound
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return build(preorder, INT_MAX);  // INT_MAX means no upper limit for root
    }
};