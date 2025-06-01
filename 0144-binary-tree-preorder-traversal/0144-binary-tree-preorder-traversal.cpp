class Solution {
public:
    void traversal(TreeNode* root, vector<int>&ans){
        if(root == NULL) return;

        ans.push_back(root->val);  //Step1: visite root Node(N)
        traversal(root->left, ans); //step
        traversal(root->right, ans);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        traversal(root, ans);

        return ans;
    }
};