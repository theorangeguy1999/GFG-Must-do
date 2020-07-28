#include <iostream>
using namespace std;
int arr[100][100];
int n,m;
void dfs(int x,int y,int k,int c)
{
    if(x>=0 and y>=0 and x<n and y<m and arr[x][y]==k)
    {
        arr[x][y]=c;
        dfs(x+1,y,k,c);
        dfs(x-1,y,k,c);
        dfs(x,y+1,k,c);
        dfs(x,y-1,k,c);
    }
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    
	    cin>>n>>m;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        cin>>arr[i][j];
	    }
	    int x,y,c;
	    cin>>x>>y>>c;
	    dfs(x,y,arr[x][y],c);
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            cout<<arr[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
