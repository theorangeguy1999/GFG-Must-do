int X[] = {-1,0,1,0};
int Y[] = {0,1,0,-1};


void func(int m[MAX][MAX],int n, vector<char> tp,int i,int j,vector<string> &ans,bool visited[MAX][MAX])
{
    if(visited[i][j] == true)
        return;
        
    if(m[i][j] == 0)
        return;
    
    if(i == n-1 && j == n-1)
    {
        string out = "";
        for(char ch:tp)
            out = out + ch;
        ans.push_back(out);
        return;
    }
    visited[i][j] = true;
    if( i + X[0] >= 0 && i + X[0]<n && j + Y[0] >= 0 && j+Y[0]<n)
    {
        tp.push_back('U');
        func(m,n,tp,i+X[0],j+Y[0],ans,visited);
        tp.pop_back();
    }
    if( i + X[1] >= 0 && i + X[1]<n && j + Y[1] >= 0 && j+Y[1]<n)
    {
        tp.push_back('R');
        func(m,n,tp,i+X[1],j+Y[1],ans,visited);
        tp.pop_back();
    }
    if( i + X[2] >= 0 && i + X[2]<n && j + Y[2] >= 0 && j+Y[2]<n)
    {
        tp.push_back('D');
        func(m,n,tp,i+X[2],j+Y[2],ans,visited);
        tp.pop_back();
    }
    if( i + X[3] >= 0 && i + X[3]<n && j + Y[3] >= 0 && j+Y[3]<n)
    {
        tp.push_back('L');
        func(m,n,tp,i+X[3],j+Y[3],ans,visited);
        tp.pop_back();
    }    
    visited[i][j] = false;
    return;
}

vector<string> printPath(int m[MAX][MAX], int n)
{
    vector<string> ans;
    vector<char> tp;
    bool visited[MAX][MAX] = {0};
    
    func(m,n,tp,0,0,ans,visited);
    sort(ans.begin(),ans.end());
    return ans;
    
}
