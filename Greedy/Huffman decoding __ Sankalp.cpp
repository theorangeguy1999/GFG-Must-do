string decode_file(struct MinHeapNode* root, string s)
{
    string out = "";
    MinHeapNode *temp = root;
    for(int i = 0 ; s[i] != '\0' ; i++)
    {
        if(s[i] == '0')
            temp = temp->left;
        else
            temp = temp->right;
        if(temp->left == NULL && temp->right == NULL)
        {
            out = out + temp->data;
            temp = root;
        }
        
    }
    
    return out;

}
