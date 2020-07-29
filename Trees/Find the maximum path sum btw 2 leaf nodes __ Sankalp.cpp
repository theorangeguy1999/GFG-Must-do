int func(Node *root, int &ans)
{
    if(root == NULL)
        return 0;
    if(root->right== NULL && root->left == NULL)
        return root->data;
    
    int left = func(root->left,ans);
    int right = func(root->right,ans);
    
    if(root->right != NULL && root->left != NULL)
    {
        ans = max(ans, (left + right + root->data));
        return max(left,right) + root->data;
    }
    
    if(root->left != NULL)
        return left+root->data;
    if(root->right != NULL)
        return right + root->data;
}

int maxPathSum(Node* root)
{ 
    // code here   
    int ans = INT_MIN;
    int temp = func(root,ans);
    return ans;
}
