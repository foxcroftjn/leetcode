struct ListNode{
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *result = malloc(sizeof(struct ListNode));
    struct ListNode *pointer = result;
    int carry = 0;
    while(1){
        int sum = l1 ? l2 ? l1->val + l2->val : l1->val : l2->val;
        sum += carry;
        carry = sum / 10;
        sum %= 10;
        pointer->val = sum;
        if((l1 && l1->next) || (l2 && l2->next)){
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
            pointer->next = malloc(sizeof(struct ListNode));
            pointer = pointer->next;
        }else{
            if(carry){
                pointer->next = malloc(sizeof(struct ListNode));
                pointer = pointer->next;
                pointer->val = carry;
            }
            pointer->next = NULL;
            return result;
        }
    }
}