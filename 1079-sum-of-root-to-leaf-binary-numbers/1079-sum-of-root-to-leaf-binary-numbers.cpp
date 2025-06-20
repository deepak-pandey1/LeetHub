class Solution {
public:
    vector<string> temp;
    void storeValues(TreeNode* root, string store){
        if(root == NULL) return;

        store += to_string(root->val);
        if(root->left == NULL && root->right == NULL)
            temp.push_back(store);

        storeValues(root->left, store);
        storeValues(root->right, store);
    }
    int sumRootToLeaf(TreeNode* root) {
        storeValues(root, "");
        int ans = 0;

        for(int i = 0; i < temp.size(); i++){
            int decimal = stoi(temp[i], nullptr, 2);
            ans += decimal;
        }
        return ans;
    }
};