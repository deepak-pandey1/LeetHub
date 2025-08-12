class Solution {
public:
    void createMap(string &str) {
        unordered_map<char, char> mapp;
        char start = 'a';

        for(int i = 0; i < str.size(); i++) {
            char ch = str[i];
            if(mapp.find(ch) == mapp.end())
                mapp[ch] = start++;
        }
        for(int i = 0; i < str.size(); i++) {
            char ch = str[i];
            str[i] = mapp[ch];
        }
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        createMap(pattern);

        vector<string> ans;
        for(int i = 0; i < words.size(); i++) {
            string temp = words[i];
            createMap(temp);

            if(temp == pattern) ans.push_back(words[i]);
        }
        return ans;
    }
};