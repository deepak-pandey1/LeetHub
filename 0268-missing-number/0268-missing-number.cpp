class Solution {
public:
    int xorr(vector<int>& nums) {
        int ans = 0;
        //1.xor all values of array
        for(int i = 0;i<nums.size();i++){
            ans = ans ^ nums[i];
        }
        //1.xor all range items of array
        for(int i = 0;i<=nums.size();i++){
            ans = ans ^ i;
        }
        return ans;
    }

    int missingNumber(vector<int>& nums) {
        // int sum = 0;
        // int n = nums.size();

        // for(int i = 0;i<n;i++){
        //     sum = sum + nums[i];
        // }

        // int total = (n*(n+1))/2;

        // int ans = total-sum;
        // return ans;

        return xorr(nums);
    }
};