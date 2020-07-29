unordered_map<Node*,int> hd;
multimap<int,int> mp;
queue<Node*> q;


// root: root node of the tree
vector<int> verticalOrder(Node *root)
{
    q.push(root);
    hd[root] = 0;
    mp.clear();
    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        mp.insert(make_pair(hd[temp],temp->data));
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
    //Your code here
}
