class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> temp;
        if (!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        long long sum = 0;

        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();

            if(front == NULL){
                temp.push_back(sum);
                sum = 0;
                if(!q.empty()) q.push(NULL);
            }
            else{
                sum += front->val;
                if(front->left != NULL) q.push(front->left);
                if(front->right != NULL) q.push(front->right);
            }
        }
        if (k > temp.size()) return -1;  // ya koi default value
        nth_element(temp.begin(), temp.end() - k, temp.end());
        return temp[temp.size() - k];
    }
};