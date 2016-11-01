/*
  Insert Node at a given position in a linked list
  head can be NULL
  First element in the linked list is at position 0
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node *ptr=new Node;
    ptr->data=data;
    ptr->next=NULL;
    if(position == 0)
    {
        ptr->next=head;
        head=ptr;
    }
    else
    {
        Node *temp=head;
        for(int i=1;i<position;i++)
            temp=temp->next;
        ptr->next=temp->next;
        temp->next=ptr;
    }
    return head;
}
