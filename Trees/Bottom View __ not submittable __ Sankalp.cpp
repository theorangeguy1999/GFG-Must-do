unordered_map<Node*,int> hd;
map<int,int> mp;
queue<Node*> q;


vector <int> bottomView(Node *root)
{
    q.push(root);
    hd[root] = 0;

    
    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        mp[hd[temp]] = temp->data;
        if(temp->left != NULL)
        {
            hd[temp->left] = hd[temp] - 1;
            q.push(temp->left);
        }
        
        if(temp->right != NULL)
        {
            hd[temp->right] = hd[temp] + 1;
            q.push(temp->right);
        }
    }
    
    vector<int> v;
    
    for(auto p : mp)
    {
        v.push_back(p.second);
    }
    
    return v;
}
