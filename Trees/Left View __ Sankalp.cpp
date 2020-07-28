void leftView(Node *root)
{
   //base case
    if(root == NULL)
        return;
   //recursive case
    
    cout<<root->data<<" ";
    if(root->left != NULL)
        leftView(root->left);
    else
        leftView(root->right);
    
    return;
}
