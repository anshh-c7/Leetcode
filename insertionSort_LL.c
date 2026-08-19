struct ListNode* insertionSortList(struct ListNode* head) {
    typedef struct ListNode insertion;
    if(head == NULL || head->next == NULL){
        return head;
    }
    insertion* unsorted = head->next;
    while(unsorted != NULL){
        insertion* curr = unsorted;
        unsorted = unsorted->next;
        insertion* sorted = head;
        while(sorted != curr){
            if(sorted->val > curr->val){
                int temp = sorted->val;
                sorted->val = curr->val;
                curr->val = temp;
            }
            sorted = sorted->next;
        }
    }
    return head;
}
