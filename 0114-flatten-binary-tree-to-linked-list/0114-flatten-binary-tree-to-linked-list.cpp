class Solution {
public:
    TreeNode* head = NULL;
    TreeNode* prev = NULL;

    void flatten(TreeNode* root) {
        if (root == NULL) return;

        if (head == NULL) head = root;
        else prev->right = root;

        prev = root;

        // \U0001f510 Left aur right subtree ko pehle store karlo
        TreeNode* left = root->left;
        TreeNode* right = root->right;

        // \U0001f4de Pehle dono subtrees ko flatten karo
        flatten(left);
        flatten(right);

        // ✅ Ab safe hai: left ko NULL set karo
        root->left = NULL;
    }
};
