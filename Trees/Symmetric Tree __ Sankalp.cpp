bool func(Node* r1, Node* r2)
{
    if(r1 == NULL && r2 == NULL)
        return true;
    if(r1 == NULL || r2 == NULL)
        return false;
        
    if(r1->data != r2->data)
        return false;
        
    return func(r1->left,r2->right) && func(r1->right,r2->left);
}

// return true/false denoting whether the tree is Symmetric or not
bool isSymmetric(struct Node* root)
{
	return func(root,root);
}
