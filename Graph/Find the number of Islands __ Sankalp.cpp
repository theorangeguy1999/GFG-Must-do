int X[] = {-1,-1,0,1,1,1,0,-1};
int Y[] = {0,1,1,1,0,-1,-1,-1};

void func(int i, int j,int color,bool visited[100][100], vector<int> A[],int N,int M)
{
    if(visited[i][j] == true)
        return;
    if(A[i][j] == 0)
    {
        visited[i][j] = true;
        return;
    }

    visited[i][j] = true;    
    A[i][j] = color;
    
    for(int k = 0 ; k<8 ; k++)
    {
        if( i + X[k] >= 0 && i + X[k] < N && j + Y[k] >= 0 && j + Y[k] < M)
        {
            func(i+X[k],j+Y[k],color,visited,A,N,M);
        }
    }
    
}


int findIslands(vector<int> A[], int N, int M)
{
    bool visited[100][100];
    for(int i = 0 ; i<N ; i++)
        for(int j = 0 ; j<M ; j++)
            visited[i][j] = false;
            
    
    int color = 0;
    for(int i = 0 ; i<N ; i++)
    {
        for(int j  = 0 ; j<M ; j++)
        {
            if(visited[i][j] == false && A[i][j] == 1)
            {
                func(i,j,color,visited,A,N,M);
                color++;
            }
        }
    }
    
    /*unordered_set<int> islands;
    for(int i = 0 ; i<N ; i++)
    {
        for(int j = 0 ; j<M ; j++)
        {
            cout<<A[i][j]<<" ";
            islands.insert(A[i][j]);
        }
        cout<<endl;
    }*/
    
    return color;
}
