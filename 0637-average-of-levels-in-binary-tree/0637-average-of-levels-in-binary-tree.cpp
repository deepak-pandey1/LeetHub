class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        double sum = 0;
        double divider = 0;

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();

            if(front == NULL){
                double average = sum/divider;
                ans.push_back(average);
                sum = 0;
                divider = 0;
                if(!q.empty()) q.push(NULL);
            }
            else{
                sum += front->val;
                divider++;
                if(front->left != NULL) q.push(front->left);
                if(front->right != NULL) q.push(front->right);
            }
        }
        return ans;
    }
};