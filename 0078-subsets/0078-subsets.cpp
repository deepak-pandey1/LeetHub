class Solution {
public:
    void subsequence(vector<int> nums, vector<int>&output,int index, vector<vector<int>>&ans) {
        if(index >= nums.size()){
            ans.push_back(output);
            return;
        }

        output.push_back(nums[index]);
        subsequence(nums, output, index+1, ans);

        output.pop_back();
        subsequence(nums, output, index+1, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;

        subsequence(nums, output, index, ans);
        return ans;
    }
};