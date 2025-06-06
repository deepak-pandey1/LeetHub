class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Base case: if root is NULL, return NULL
        if (root == NULL) return NULL;

        // If current node is either p or q, then it can be the answer
        if (root == p || root == q) {
            return root;
        }

        // If both p and q are smaller than root, go to left subtree
        if (p->val < root->val && q->val < root->val) {
            return lowestCommonAncestor(root->left, p, q);
        }

        // If both p and q are greater than root, go to right subtree
        if (p->val > root->val && q->val > root->val) {
            return lowestCommonAncestor(root->right, p, q);
        }

        // If one node is on the left and one is on the right,
        // then current node is the LCA
        return root;
    }
};
