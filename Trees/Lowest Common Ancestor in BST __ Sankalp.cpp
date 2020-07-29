Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
    if(root == NULL)
        return root;
        
    int low,high;
    if(n1 < n2)
    {
        low = n1;
        high = n2;
    }
    else
    {
        high = n1;
        low = n2;
    }
    
    if(low <=root->data && root->data <= high)
        return root;
    
    if(root->data > high)
        return LCA(root->left,low,high);
    if(root->data < low)
        return LCA(root->right,low,high);
    
}
