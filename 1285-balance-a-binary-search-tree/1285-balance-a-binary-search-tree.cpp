class Solution {
public:
    vector<int> nodes;
    // Step 1: Inorder traversal to store nodes in sorted order
    void inorder(TreeNode* root) {
        if (!root) return;
        inorder(root->left);
        nodes.push_back(root->val);
        inorder(root->right);
    }
    // Step 2: Build balanced BST from sorted list
    TreeNode* makeTree(int start, int end){
        if(start > end) return NULL;

        int mid = (start+end)/2;
        int element = nodes[mid];
        TreeNode* root = new TreeNode(element);

        root->left = makeTree(start, mid-1);
        root->right = makeTree(mid+1, end);

        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);  // Get sorted values
        return makeTree(0, nodes.size() - 1);
    }
};