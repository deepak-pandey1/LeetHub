class Solution {
public:
    int possibleStringCount(string word) {
        unordered_map<int, int> mp;

        for(int i = 0; i < word.size(); i++){
            if(word[i] == word[i+1]) mp[word[i]]++;
        }

        int ans = 0;
        for(auto it : mp){
            ans += it.second;
        }
        return (ans+1);
    }
};