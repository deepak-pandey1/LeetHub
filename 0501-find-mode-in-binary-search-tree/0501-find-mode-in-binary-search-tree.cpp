class Solution {
public:
    unordered_map<int, int>mp;
    void store(TreeNode* root){
        if(root == NULL) return;

        store(root->left);
        mp[root->val]++;
        store(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;
        store(root);

        int maxy = 0;
        for(auto it : mp)
            maxy = max(maxy, it.second);

        for(auto it : mp){
            if(it.second == maxy)
                ans.push_back(it.first);
        }
        return ans;
    }
};