void deleteNode(struct ListNode* node) {
    typedef struct ListNode delNode;
    delNode* nextNode = NULL;
    delNode* current = node->next;
    nextNode = node->next->next;
    node->val = (node->next)->val;
    node->next = nextNode;
}
