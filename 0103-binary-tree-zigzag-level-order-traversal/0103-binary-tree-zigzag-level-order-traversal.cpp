class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> temp;
        if(root == NULL) return ans;

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        bool ltoRight = true;

        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();

            if(front == NULL){
                if(ltoRight)
                    ans.push_back(temp);
                else{
                    reverse(temp.begin(), temp.end());
                    ans.push_back(temp);
                }
                if(!q.empty()) q.push(NULL);
                ltoRight = !ltoRight;
                temp.clear();
            }
            else{
                temp.push_back(front->val);
                if(front->left != NULL) q.push(front->left);
                if(front->right != NULL) q.push(front->right);
            }
        }
        return ans;
    }
};