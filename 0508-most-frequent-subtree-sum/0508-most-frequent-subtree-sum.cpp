class Solution {
public:
    unordered_map<int, int> mp;
    int subtreeSum(TreeNode* root) {
        if (root == NULL) return 0;

        int left = subtreeSum(root->left);
        int right = subtreeSum(root->right);
        int curr = root->val + left + right;

        mp[curr]++;
        return curr;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        subtreeSum(root);
        vector<int> ans;

        int maxFreq = 0;
        for(auto it : mp)
            maxFreq = max(maxFreq, it.second);

        for(auto it : mp){
            if(it.second == maxFreq) ans.push_back(it.first);
        }
        return ans;
    }
};