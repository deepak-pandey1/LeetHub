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

        int i = index+1;
        while(i < nums.size() && nums[i] == nums[i-1]) i++;

        subsequence(nums, output, i, ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());    // duplicates handle karne ke liye sort karo
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;

        subsequence(nums, output, index, ans);
        return ans;
    }
};