bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
          int count1=0,count2=0;
    SinglyLinkedListNode* a= head1;
    SinglyLinkedListNode* b= head2;
    while (a!=nullptr)
    {  count1++;
       a = a->next;
    }
    while(b!=nullptr)
    {
        count2++;
        b=b->next;
    }
    if(count1!=count2)
      return 0;
     while(head1!=nullptr)
     {
        if(head1->data!=head2->data)
           return 0;
        head1=head1->next;
        head2=head2->next;
     }
  return 1;
}
