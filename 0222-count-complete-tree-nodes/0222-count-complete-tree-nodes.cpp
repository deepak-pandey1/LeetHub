class Solution {
public:
    void count(TreeNode* root, int &ans){
        if(root == NULL) return;

        ans++;
        count(root->left, ans);
        count(root->right, ans);
    }

    int countNodes(TreeNode* root) {
        int ans = 0;
        count(root, ans);
        return ans;
    }
};