class Solution {
public:
    vector<int> result;
    void helper(Node* root) {
        if (root == NULL) return;

        result.push_back(root->val); // root

        for (auto child : root->children) {
            helper(child); // har child pe recursive call
        }
    }
    vector<int> preorder(Node* root) {
        helper(root);
        return result;
    }
};
