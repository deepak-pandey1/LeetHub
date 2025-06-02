class Solution {
public:
    vector<vector<int>> ans;
    void fill(TreeNode* root, int targetSum, vector<int> temp, int sum){
        if(root == NULL) return;

        sum += root->val;
        temp.push_back(root->val);

        if(root->left == NULL && root->right == NULL){
            if(targetSum == sum) ans.push_back(temp);
            return;
        }

        fill(root->left, targetSum, temp, sum);
        fill(root->right, targetSum, temp, sum);
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        int sum = 0;

        fill(root, targetSum, temp, sum);
        return ans;
    }
};