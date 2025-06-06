class Solution {
public:
    void trversal(TreeNode* root, vector<int>&inorder){
        if(root == NULL) return;

        trversal(root->left, inorder);
        inorder.push_back(root->val);
        trversal(root->right, inorder);
    }

    bool findTarget(TreeNode* root, int k) {
        vector<int> inorder;
        trversal(root, inorder);

        int start = 0;
        int end = inorder.size()-1;
        while(start < end){
            int sum = inorder[start] + inorder[end];

            if(sum == k) return true;
            else if(sum > k) end--;
            else start++;
        }
        return false;
    }
};