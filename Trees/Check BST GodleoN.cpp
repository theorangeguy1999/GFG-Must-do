bool isBSThelper(Node* root , int low , int high)
{
    if(root == NULL)
    {
        return true;
    }
    if(root->data < low || root->data > high)
    {
        return false;
    }
    bool isLeftOk = isBSThelper(root->left , low , root->data - 1);
    bool isRightOk = isBSThelper(root->right , root->data , high);
    return isLeftOk && isRightOk;
}

bool isBST(Node* root) {
    // Your code here
    return isBSThelper(root , INT_MIN , INT_MAX);
}
