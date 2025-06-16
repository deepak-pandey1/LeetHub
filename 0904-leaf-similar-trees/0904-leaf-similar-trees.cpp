class Solution {
public:
    vector<int> ans1;
    vector<int> ans2;
    void preorderTraversel1(TreeNode* root1){
        if(root1 == NULL) return;

        preorderTraversel1(root1->left);
        if(root1->left == NULL && root1->right == NULL)
            ans1.push_back(root1->val);
        preorderTraversel1(root1->right);
    }
    void preorderTraversel2(TreeNode* root2){
        if(root2 == NULL) return;

        preorderTraversel2(root2->left);
        if(root2->left == NULL && root2->right == NULL)
            ans2.push_back(root2->val);
        preorderTraversel2(root2->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        preorderTraversel1(root1);
        preorderTraversel2(root2);

        return (ans1 == ans2);
    }
};