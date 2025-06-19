class Solution {
public:
    vector<string> inorder;
    void rootToLeaves(TreeNode* root, string temp){
        if(root == NULL) return;

        temp += to_string(root->val);
        if(root->left == NULL && root->right == NULL)
            inorder.push_back(temp);

        rootToLeaves(root->left, temp);
        rootToLeaves(root->right, temp);
    }
    int sumNumbers(TreeNode* root) {
        if(root == NULL) return 0;
        rootToLeaves(root, "");

        int ans = 0;
        for(int i = 0; i < inorder.size(); i++){
            ans += stoi(inorder[i]);
        }

        return ans;
    }
};