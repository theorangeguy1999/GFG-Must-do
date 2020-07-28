bool func(Node *root, int min, int max)
{
    if(root == NULL)
        return true;
        
    if(root->data < min|| root->data > max)
        return false;
    
    return (func(root->left,min,(root->data)-1) && func(root->right,(root->data) + 1,max));
}

// return true if the given tree is a BST, else return false
bool isBST(Node* root)
{
    return func(root,INT_MIN,INT_MAX);
}

