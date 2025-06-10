class Solution {
public:
    bool sameTree(TreeNode* p, TreeNode* q){
        if(p == NULL && q == NULL) return true;

        if(p == NULL || q == NULL) return false;
        if(p->val != q->val) return false;

        bool ans1 = sameTree(p->left, q->right);
        bool ans2 = sameTree(p->right, q->left);

        return ans1 && ans2;
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return sameTree(root->left, root->right);
    }
};