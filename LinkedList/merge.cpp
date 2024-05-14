SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if (head1 == nullptr) return head2;
    if (head2 == nullptr) return head1;

    SinglyLinkedListNode* mergedHead = nullptr;
    if (head1->data <= head2->data) {
        mergedHead = head1;
        head1 = head1->next;
    } else {
        mergedHead = head2;
        head2 = head2->next;
    }

    SinglyLinkedListNode* current = mergedHead;

    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data <= head2->data) {
            current->next = head1;
            head1 = head1->next;
        } else {
            current->next = head2;
            head2 = head2->next;
        }
        current = current->next;
    }

    if (head1 != nullptr) {
        current->next = head1;
    } else {
        current->next = head2;
    }

    return mergedHead;
}
