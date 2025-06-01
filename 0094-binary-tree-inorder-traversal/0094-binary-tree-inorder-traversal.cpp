class Solution {
public:
    void traversal(TreeNode* root, vector<int>&ans){
        if(root == NULL) return;

        traversal(root->left, ans); 
        ans.push_back(root->val); 
        traversal(root->right, ans);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        traversal(root, ans);

        return ans;
    }
};