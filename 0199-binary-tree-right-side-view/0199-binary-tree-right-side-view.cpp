class Solution {
public:
    vector<int> ans;
    void rightSide(TreeNode* root, int level){
        if(root == NULL) return;

        if(level == ans.size()) ans.push_back(root->val);

        rightSide(root->right, level+1);
        rightSide(root->left, level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL) return ans;

        rightSide(root, 0);
        return ans;
    }
};