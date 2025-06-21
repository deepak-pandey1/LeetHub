class Solution {
public:
    vector<int> leftMost;
    void leftTraversal(TreeNode* root, int level){
        if(root == NULL) return;

        if(level == leftMost.size()) leftMost.push_back(root->val);

        leftTraversal(root->left, level+1);
        leftTraversal(root->right, level+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        if(root == NULL) return 0;

        leftTraversal(root, 0);
        return leftMost[leftMost.size()-1];
    }
};