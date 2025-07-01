class Solution {
public:
    vector<int> ans;
    void inorderTraversal(TreeNode* a){
        if(a == NULL) return;

        inorderTraversal(a->left);
        ans.push_back(a->val);
        inorderTraversal(a->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        inorderTraversal(root1);
        inorderTraversal(root2);

        sort(ans.begin(), ans.end());
        return ans;
    }
};