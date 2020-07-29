Node * bToDLL(Node *root)
{
    // your code here
    if(root == NULL)
        return NULL;
    //recursive case;
    
    Node * left = bToDLL(root->left);
    if(left == NULL)
    {
        left = root;
    }
    else
    {
        Node* temp = left;
        while(temp->right != NULL)
            temp = temp->right;
        
        temp->right = root;
        root->left = temp;
    }
    
    Node *right = bToDLL(root->right);
    if(right == NULL)
    {
        root->right=NULL;
    }
    else
    {
        root->right = right;
        right->left = root;
    }
    
    return left;
}
