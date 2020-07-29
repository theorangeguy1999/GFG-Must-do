
int func(Node * root, int &ans)
{
    if(root == NULL)
        return 0;
    
    int lc = func(root->left,ans);
    int rc = func(root->right,ans);
    
    ans = max(ans, lc + rc + 1);
    if(root->right != NULL && root->left != NULL)
    {
        return max(lc,rc) + 1;
    }
    if(root->right != NULL)
        return rc + 1;
    if(root->left != NULL)
        return lc + 1; 
    
    return 1;
}

int diameter(Node* node)
{
    // Your code here
    int ans = INT_MIN;
    int temp = func(node,ans);
    return ans;
}
