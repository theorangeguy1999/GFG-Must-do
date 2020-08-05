vector <int> bfs(vector<int> g[], int N)
{
    bool visited[N];
    for(int i = 0 ; i<N ; i++)
        visited[i] = false;
        
    queue<int> q;
    vector<int> ans;
    q.push(0);
    visited[0] = true;
    
    
    while(!q.empty())
    {
        int cur_ver = q.front();
        q.pop();
        ans.push_back(cur_ver);
        visited[cur_ver] = true;
        
        for(int nbr:g[cur_ver])
        {
            if(visited[nbr] == false )
            {
                q.push(nbr);
                visited[nbr] = true;
            }
        }
    }
    
    return ans;

}
