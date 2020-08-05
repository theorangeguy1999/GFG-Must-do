vector <int> dijkstra(vector<vector<int>> g, int src, int V)
{
    unordered_set<int> sel,unsel;
    
    for(int i = 0 ; i<V ; i++)
        unsel.insert(i);
    
    vector<int> dist(V);
    for(int i = 0 ; i<V ; i++)
        dist[i] = INT_MAX;
    
    dist[src] = 0;
    
    while(!unsel.empty())
    {
        int vtr,min_dist = INT_MAX;
        for(int vertex:unsel)
        {
            if(dist[vertex] < min_dist)
            {
                min_dist = dist[vertex];
                vtr = vertex;
            }
        }
        
        unsel.erase(vtr);
        sel.insert(vtr);
        
        for(int i = 0 ; i<V ; i++)
        {
            if(g[vtr][i] != 0)
            {
                if(unsel.find(i) != unsel.end())
                    dist[i] = min(dist[i],dist[vtr] + g[vtr][i]);
            }
        }
        
    }
    
    return dist;
}
