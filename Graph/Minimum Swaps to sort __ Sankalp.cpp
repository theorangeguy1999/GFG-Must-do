int minSwaps(int arr[], int N)
{
    pair<int,int> p[N];
    for(int i = 0 ; i<N ; i++)
    {
        p[i].first = arr[i];
        p[i].second = i;
    }
    
    sort(p,p+N);
    
    bool visited[N];
    for(int i = 0 ; i<N ; i++)
        visited[i] = false;
        
    int ans = 0;
    
    for(int i = 0 ; i<N ; i++)
    {
        if(visited[i] == false)
        {
            if(p[i].second == i)
                continue;
            
            int cycle = 0;
            for(int j = i; visited[j] == false ; j = p[j].second)
            {
                visited[j] = true;
                cycle++;
            }
            
            if(cycle > 0)
                ans = ans + cycle - 1;
        }
    }
    
    
    return ans;
}
