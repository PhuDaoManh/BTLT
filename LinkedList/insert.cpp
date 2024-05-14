
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
         SinglyLinkedListNode* newNode=new SinglyLinkedListNode(data);
         SinglyLinkedListNode* a=llist;
         for(int i=0;i<position-1;i++)
         {
             a=a->next;
         }
        newNode->next=a->next;
        a->next=newNode;
return llist;
}
