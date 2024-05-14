SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
        SinglyLinkedListNode* newNode=new SinglyLinkedListNode(data);
        if(llist==nullptr)
           llist=newNode;
        else
        {
            newNode->next=llist;
            llist=newNode;
        }
return llist;
}
