class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(cloned == NULL || target == NULL) return NULL;

        if(target->val == cloned->val) return cloned;

        TreeNode* ans1 = getTargetCopy(original, cloned->left, target);
        TreeNode* ans2 = getTargetCopy(original, cloned->right, target);

        if(ans1 != NULL && ans2 == NULL) return ans1;
        else if(ans1 == NULL && ans2 != NULL) return ans2;
        else return ans1;
    }
};