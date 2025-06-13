class Solution {
public:
    unordered_map<string, int> mp;
    vector<TreeNode*>ans;
    string preorder(TreeNode* root){
        if(root == NULL) return "N";

        string curr = to_string(root->val);
        string left = preorder(root->left);
        string right = preorder(root->right);

        string final = curr + "," + left + "," + right;

        if(mp[final] == 1) ans.push_back(root);
        mp[final]++;

        return final;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        preorder(root);
        return ans;
    }
};