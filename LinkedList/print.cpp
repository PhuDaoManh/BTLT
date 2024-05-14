void printLinkedList(SinglyLinkedListNode* head) {
        SinglyLinkedListNode* ptr=head;
        while(ptr!=nullptr)
        {
            cout << ptr->data<< endl;
            ptr=ptr->next;
        }

}
