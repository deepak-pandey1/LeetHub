class Solution {
public:
    vector<int> result;
    void helper(Node* root) {
        if (root == NULL) return;

        for (auto child : root->children) {
            helper(child); // har child pe recursive call
        }
        result.push_back(root->val); // root
    }
    vector<int> postorder(Node* root) {
        helper(root);
        return result;
    }
};