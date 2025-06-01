/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root) {
        //------------------------------------------------------->BY recursion
        //base case
        if(root == NULL) {
            return 0;
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int height = max(leftHeight, rightHeight) + 1;  //root node + 1
        return height;
    }

    bool isBalanced(TreeNode* root) {
        //base case
        if(root == NULL) {
            return true;
        }

        //currNode - solve
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int diff = abs(leftHeight-rightHeight);

        bool currNodeAns = (diff <= 1);
        bool leftAns = isBalanced(root->left);
        bool rightAns = isBalanced(root->right);

        if (currNodeAns && leftAns && rightAns) {
            return true;
        }
        else {
            return false;
        }
    }
};