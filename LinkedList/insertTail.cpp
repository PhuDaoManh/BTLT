SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
        SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
        if (head == nullptr) {
            head = newNode;
            return head;
        }
        SinglyLinkedListNode* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
return head;
}
