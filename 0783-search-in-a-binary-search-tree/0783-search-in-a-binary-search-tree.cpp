class Solution {
public:
    TreeNode* search(TreeNode* root, int val){
        if(root == NULL) return NULL;

        if(root->val == val) return root;

        TreeNode* ans1 = search(root->left, val);
        TreeNode* ans2 = search(root->right, val);

        if(ans1 != NULL && ans2 == NULL) return ans1;
        else return ans2;
    }

    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans = search(root, val);
        return ans;
    }
};