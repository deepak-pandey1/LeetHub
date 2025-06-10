class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;

        // if(root->left == NULL || root->right == NULL)
        //     int ans = max(option1, option2);

        int option1 = minDepth(root->left)+1;
        int option2 = minDepth(root->right)+1;
        int ans = 0;
        if(root->left == NULL || root->right == NULL)
            ans = max(option1, option2);
        else
            ans = min(option1, option2);

        return ans;
    }
};