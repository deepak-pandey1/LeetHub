class Solution {
public:
    vector<int> inorder;
    void traversal(TreeNode* root){
        if(root == NULL) return;

        traversal(root->left);
        inorder.push_back(root->val);
        traversal(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        traversal(root);
        if(root == NULL) return 0;

        int ans = INT_MAX;
        for(int i = 1; i < inorder.size(); i++) {
            ans = min(ans, inorder[i] - inorder[i-1]); // Since it's sorted, no need for abs
        }
        return ans;
    }
};