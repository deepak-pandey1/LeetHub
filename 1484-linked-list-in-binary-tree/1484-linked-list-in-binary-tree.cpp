class Solution {
public:
    bool check(ListNode* head, TreeNode* root){
        if(head == NULL) return true;
        if(root == NULL) return false;

        if(root->val != head->val) return false;

        bool ans1 = check(head->next, root->left);
        bool ans2 = check(head->next, root->right);

        return (ans1 || ans2);
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(root == NULL) return false;

        bool ans1 = check(head, root);

        bool ans2 = isSubPath(head, root->left);
        bool ans3 = isSubPath(head, root->right);

        return (ans1 || ans2 || ans3);
    }
};