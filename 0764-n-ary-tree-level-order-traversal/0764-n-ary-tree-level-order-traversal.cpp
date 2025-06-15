class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        vector<int> temp;

        if (root == NULL) return ans;

        queue<Node*> q;
        q.push(root);
        q.push(NULL);  // Level marker

        while (!q.empty()) {
            Node* front = q.front();
            q.pop();

            if (front == NULL) {
                ans.push_back(temp);
                temp.clear();
                if (!q.empty()) q.push(NULL);  // Add marker for next level
            } else {
                temp.push_back(front->val);
                for (auto child : front->children) {
                    q.push(child);  // Push all children
                }
            }
        }
        return ans;
    }
};
