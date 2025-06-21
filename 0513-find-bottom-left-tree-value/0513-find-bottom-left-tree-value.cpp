class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* front = NULL;

        while(!q.empty()){
            front = q.front();
            q.pop();

            if(front->right != NULL) q.push(front->right);
            if(front->left != NULL) q.push(front->left);
        }

        return front->val;
    }
};