class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string number;

        while(head != NULL){
            number += to_string(head->val);
            head = head->next;
        }

        int decimal = stoi(number, nullptr, 2);
        return decimal;
    }
};