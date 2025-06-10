class Solution {
public:
    vector<string> ans;
    void path(TreeNode* root, string temp){
        if(root == NULL) return;

        temp += to_string(root->val);
        if(root->left != NULL || root->right != NULL)
            temp += "->"; 
        if(root->left == NULL && root->right == NULL)
            ans.push_back(temp);

        path(root->left, temp);
        path(root->right, temp);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string temp = "";
        path(root, temp);

        return ans;
    }
};