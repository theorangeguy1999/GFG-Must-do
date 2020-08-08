int spanningTree(int V, int E, vector<vector<int>> &graph)
{
    int parent[V];
    
    bool inc[V];
    int dist[V];
    for(int i = 0 ; i<V ; i++)
    {
        inc[i] = false;
        dist[i] = INT_MAX;
    }
    
    dist[0] = 0;
    parent[0] = -1;
    
    for(int i = 0 ; i<V-1 ; i++)
    {
        int min_dist = INT_MAX, min_index = -1;
        for(int j = 0 ; j<V ; j++)
        {
            if(inc[j] == false)
                if( dist[j] <= min_dist)
                {
                    min_index = j;
                    min_dist = dist[j];
                }
        }
        
        inc[min_index] = true;
        
        for(int k = 0 ; k<V ; k++)
        {
            if(inc[k] == false)
            {
                if(dist[k] > graph[min_index][k])
                {
                    dist[k] = graph[min_index][k];
                    parent[k] = min_index;
                }
            }
        }
    }
    
    int ans = 0;
    
    for(int i = 0 ; i<V ; i++)
        ans = ans + dist[i];
        
    return ans;
    
}
