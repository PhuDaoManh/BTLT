SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
           SinglyLinkedListNode* current=llist;
     if (position == 0) {
        SinglyLinkedListNode* temp = llist->next;
        delete llist;
        return temp;
    }
            for(int i=0;i<position-1;i++)
              current=current->next;
    SinglyLinkedListNode* temp = current->next;
    current->next = current->next->next;
    delete temp;

    return llist;
}
