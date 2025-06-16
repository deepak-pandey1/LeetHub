class Solution {
public:
    // helper that takes two mirror nodes
    void dfs(TreeNode* leftNode, TreeNode* rightNode, int lvl) {
        if (!leftNode || !rightNode) return;

        // at odd levels, swap their values
        if (lvl % 2 == 1) {
            std::swap(leftNode->val, rightNode->val);
        }

        // recurse into the next level, crossing over
        dfs(leftNode->left,  rightNode->right, lvl + 1);
        dfs(leftNode->right, rightNode->left,  lvl + 1);
    }

    TreeNode* reverseOddLevels(TreeNode* root) {
        if (!root) return nullptr;
        // start with the two children of root, at level 1
        dfs(root->left, root->right, 1);
        return root;
    }
};
