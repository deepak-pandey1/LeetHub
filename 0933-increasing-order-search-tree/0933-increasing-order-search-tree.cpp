class Solution {
public:
    TreeNode* prev = NULL;
    TreeNode* head = NULL;
    TreeNode* increasingBST(TreeNode* root) {
        if(root == NULL) return NULL;

        increasingBST(root->left);

        if(head == NULL) head = root;
        else{
            prev->right = root;
        }
        prev = root;
        prev->left = NULL;

        increasingBST(root->right);
        return head;
    }
};