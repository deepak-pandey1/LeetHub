class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if (root == NULL) return ans;  // \U0001f539 Important null check
        int maxy = INT_MIN;

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
		    TreeNode* front = q.front();
		    q.pop();

            if(front == NULL){
                ans.push_back(maxy);
                maxy = INT_MIN;
                if(!q.empty()) q.push(NULL);
            }
            else{
                maxy = max(front->val, maxy);
                if (front->left != NULL)q.push(front->left);
                if (front->right != NULL)q.push(front->right);
            }
        }
        return ans;
    }
};