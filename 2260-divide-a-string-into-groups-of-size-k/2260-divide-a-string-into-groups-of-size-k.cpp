class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        string temp;

        // Build full groups of size k
        for (char c : s) {
            temp += c;
            if (temp.size() == k) {
                ans.push_back(temp);
                temp.clear();
            }
        }

        // Agar last group adhura hai, pad it correctly
        if (!temp.empty()) {
            int need = k - temp.size();        // PRE-COMPUTE fills
            for (int i = 0; i < need; i++)
                temp += fill;
            ans.push_back(temp);
        }

        return ans;
    }
};
