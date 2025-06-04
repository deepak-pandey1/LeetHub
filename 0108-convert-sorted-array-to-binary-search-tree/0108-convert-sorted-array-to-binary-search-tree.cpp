class Solution {
public:
    TreeNode* makeTree(vector<int>& nums, int start, int end){
        if(start > end) return NULL;

        int mid = (start+end)/2;
        int element = nums[mid];
        TreeNode* root = new TreeNode(element);

        root->left = makeTree(nums, start, mid-1);
        root->right = makeTree(nums, mid+1, end);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return makeTree(nums, 0, nums.size()-1);
    }
};