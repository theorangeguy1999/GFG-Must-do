void DFS(int vertex,bool visited[], vector<int> adj[],stack<int> &s)
{
    if(visited[vertex] == true)
        return;
    
    visited[vertex] = true;
    
    for(int nbr:adj[vertex])
    {
        if(visited[nbr] == false)
            DFS(nbr,visited,adj,s);
    }
    
    s.push(vertex);
    
    return;
}

void DFS_2(int vertex,bool visited[], vector<vector<int>> &adj)
{
    if(visited[vertex] == true)
        return;
    
    visited[vertex] = true;
    
    for(int nbr:adj[vertex])
    {
        if(visited[nbr] == false)
            DFS_2(nbr,visited,adj);
    }
    
    return;
}

int kosaraju(int V, vector<int> adj[])
{
    stack<int> s;
    
    bool visited[V];
    for(int i = 0 ; i<V ; i++)
        visited[i] = false;
    
    for(int i = 0 ; i<V ; i++)
    {
        if(visited[i] == false)
            DFS(i,visited,adj,s);
    }
    
    vector<vector<int>> transpose(V);
    
    for(int i = 0 ; i<V ; i++)
    {
        for(int e:adj[i])
        {
            transpose[e].push_back(i);
        }
    }
    
    bool new_visited[V];
    for(int i = 0 ; i<V ; i++)
        new_visited[i] = false;
    
    stack<int> temp;
    int ans = 0;
    while(!s.empty())
    {
        int vertex = s.top();
        s.pop();
        if(new_visited[vertex] == false)
        {
            DFS_2(vertex,new_visited,transpose);
            ans++;
        }
    }
    
    return ans;

}
