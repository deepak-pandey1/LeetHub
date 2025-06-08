class Solution {
public:
    bool detectCapitalUse(string word) {
        int capitalCount = 0;
        
        for(char ch : word) {
            if(isupper(ch)) capitalCount++;
        }

        if(capitalCount == word.length()) return true;                 // All caps
        if(capitalCount == 0) return true;                             // All small
        if(capitalCount == 1 && isupper(word[0])) return true;        // First capital only

        return false;
    }
};
