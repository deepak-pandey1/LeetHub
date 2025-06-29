class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if (!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int ans = 0;
        int sum = 0;
        int prev = INT_MIN;
        int level = 1;

        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();

            if(front == NULL){
                if(sum > prev){
                    ans = level;
                }
                if(prev < sum) prev = sum;
                sum = 0;
                level++ ;
                if(!q.empty()) q.push(NULL);
            }
            else{
                sum += front->val;
                if(front->left != NULL) q.push(front->left);
                if(front->right != NULL) q.push(front->right);
            }
        }
        return ans;
    }
};