struct ListNode{
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *result = malloc(sizeof(struct ListNode));
    struct ListNode *pointer = NULL;
    int carry = 0;
    do{
        if(pointer){
            pointer->next = malloc(sizeof(struct ListNode));
            pointer = pointer->next;
        }else{
            pointer = result;
        }
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        carry = sum / 10;
        sum %= 10;
        pointer->val = sum;
        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
    }while(l1 || l2 || carry);
    pointer->next = NULL;
    return result;
}