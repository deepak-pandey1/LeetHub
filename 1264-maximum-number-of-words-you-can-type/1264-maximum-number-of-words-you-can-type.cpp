class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> seen;
        for(int i = 0; i < brokenLetters .size(); i++){
            seen.insert(brokenLetters[i]);
        }

        int ans = 0;
        bool flag = false;
        for(int i = 0; i < text.size(); i++){
            if(seen.find(text[i]) != seen.end()) flag = true;
            if (text[i] == ' ') {
                if (!flag) ans++;
                flag = false;
            }
        }
        // Check for the last word
        if (!flag) ans++;

        return ans;
    }
};