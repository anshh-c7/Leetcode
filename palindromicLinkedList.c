bool isPalindrome(struct ListNode* head) {
    typedef struct ListNode paliList;
    paliList* fast = head;
    paliList* slow = head;
    while(fast != NULL && fast->next != NULL){
        if (head == NULL || head->next == NULL) {
        return true;
        }
        fast = fast->next->next;
        slow = slow->next;
    }
    paliList* newNode = NULL;
    paliList* current = slow;
    paliList* prev = NULL;
    while(current != NULL){
        newNode = current->next;
        current->next = prev;
        prev = current;
        current = newNode;
    }

    paliList* firsthalf = head;
    paliList* secondhalf = prev;
    while(secondhalf != NULL){
        if(firsthalf->val != secondhalf->val){
            return false;
        }
        firsthalf = firsthalf->next;
        secondhalf = secondhalf->next;
    }
    return true;
}
