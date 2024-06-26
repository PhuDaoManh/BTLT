SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {

   SinglyLinkedListNode* prev = nullptr;
   SinglyLinkedListNode* current = llist;
 SinglyLinkedListNode* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}
