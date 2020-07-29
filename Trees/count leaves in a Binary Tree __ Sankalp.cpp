int countLeaves(Node* root)
{
    if(root->right == NULL && root->left == NULL)
        return 1;
    
    int left = 0, right = 0;
    if(root->right !=NULL)
        right = countLeaves(root->right);
    if(root->left != NULL)
        left = countLeaves(root->left);
    
    return left + right;
}
