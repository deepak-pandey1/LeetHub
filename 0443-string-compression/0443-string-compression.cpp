class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0; // Index for modifying the array in place
        for(int i = 0; i < chars.size(); i++) {
            char ch = chars[i];

            // Count occurrences of the character
            int count = 0;
            while(i < chars.size() && chars[i] == ch){
                count++;
                i++;
            }
            if(count == 1){
                chars[index++] = ch;
            }
            else{
                chars[index++] = ch;
                string digit = to_string(count);
                for(auto it : digit) {
                    chars[index] = it;
                    index++;
                }
            }
            i--; //Since while loop exits with i ahead,reduce it by 1 to match for loop behaviour
        }
        return index--;
    }
};