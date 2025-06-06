class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Base case
        if (root == NULL) return NULL;

        // case 1: p and q both come in left subtree of root
        if (p->val < root->val && q->val < root->val) {
            TreeNode* leftAns = lowestCommonAncestor(root->left, p, q);
            return leftAns;
        }

        // case 2: p and q both come in right subtree of root
        if (p->val > root->val && q->val > root->val) {
            TreeNode* rightAns = lowestCommonAncestor(root->right, p, q);
            return rightAns;
        }

        // case 3: p is in left and q is in right of root
        if (p->val < root->val && q->val > root->val) {
            return root;
        }

        // case 4: q is in left and p is in right of root
        if (q->val < root->val && p->val > root->val) {
            return root;
        }

        // default return
        return root;
    }
};
