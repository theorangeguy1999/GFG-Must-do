void leftViewHelper(Node* root , int level , int* count)
{
    if(root == NULL)
    {
        return;
    }
    if(level > *count)
    {
        cout << root->data << " ";
        *count = *count + 1;
    }
     leftViewHelper(root->left , level + 1 , count);
     leftViewHelper(root->right , level + 1 , count);
}

void leftView(Node *root)
{
   // Your code here
   if(root == NULL)
   {
       return ;
   }
   int count = 0;
   leftViewHelper(root , 1 , &count);
}
