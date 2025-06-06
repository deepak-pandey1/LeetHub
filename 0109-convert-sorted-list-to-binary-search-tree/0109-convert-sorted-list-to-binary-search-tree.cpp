class Solution {
public:
    TreeNode* buildBST(vector<int>& nums, int start, int end){
        if(start > end) return NULL;

        int mid = (start+end)/2;
        int element = nums[mid];
  	    TreeNode* root = new TreeNode(element);

	    root->left = buildBST(nums, start, mid-1);
	    root->right = buildBST(nums, mid+1, end);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> values;
        while (head) {
            values.push_back(head->val); // Step 1: push all elements
            head = head->next;
        }

        return buildBST(values, 0, values.size() - 1); // Step 2
    }
};