void deleteNode(Node *node)
{
   // Your code here
   Node *temp1 = node;
   Node *temp2= node;
   while(temp1->next != NULL)
   {
       temp1->data = temp1->next->data;
       temp2 = temp1;
       temp1 = temp1->next;
   }
   temp2 -> next = NULL;
   delete(temp1);
   
}
