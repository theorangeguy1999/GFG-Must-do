bool func(Node *root, int &height)
{
    int lefth,righth;
    
    if(root == NULL)
    {
        height  = 0;
        return true;
    }
    
    bool left , right;
    left = func(root->left,lefth);
    right = func(root->right,righth);
    
    height = max(lefth,righth) + 1;
     
    if(abs(lefth - righth) >= 2)
        return false;
    
    return left && right;
}

bool isBalanced(Node *root)
{
    int height = 0;
    return func(root,height);
}
