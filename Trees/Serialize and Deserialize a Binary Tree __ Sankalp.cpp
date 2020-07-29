void serialize(Node *root,vector<int> &A)
{
    if(root == NULL)
    {
        A.push_back(-1);
        return;
    }
    
    A.push_back(root->data);
    serialize(root->left,A);
    serialize(root->right,A);
    return;
}

/*this function deserializes
 the serialized vector A*/
 
Node * func(vector<int> &A,int &i)
{
    if(i == A.size() || A[i] == -1)
    {
        i++;
        return NULL;
    }
    
    Node* root = new Node(A[i]);
    i++;
    root->left = func(A,i);
    root->right = func(A,i);
    
    return root;
}

Node * deSerialize(vector<int> &A)
{
    int i = 0;
    return func(A,i);
}
