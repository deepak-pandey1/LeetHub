class Solution {
  public:
    void nikalo(int n, vector<int>&ans) {
        if(n <= 0) {
            ans.push_back(n);
            return;
        }
        
        ans.push_back(n);
        n = n-5;
        
        nikalo(n, ans);
        
        n = n+5;
        ans.push_back(n);
    }
  
    vector<int> pattern(int N) {
        vector<int> ans;
        nikalo(N, ans);
        
        return ans;
    }
};