void MyStack ::push(int x) 
{
    StackNode *temp = new StackNode(x);
    temp->next = top;
    top = temp;
}

/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop()
{
    // Your Code
    if(top == NULL)
        return -1;
    StackNode * temp = top;
    int data = temp->data;
    top = top -> next;
    delete(temp);
    return data;
}
