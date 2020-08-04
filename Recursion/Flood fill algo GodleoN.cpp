#include <bits/stdc++.h>
using namespace std;
int arr[100][100];
int n , m ;  
void floodFill(int ans,int x,int y,int k)
{
if(x >= 0 && y >= 0 && x < n && y < m && arr[x][y] == ans)
{
arr[x][y] = k;
floodFill(ans , x , y+1 , k);
floodFill(ans , x , y-1 , k);
floodFill(ans , x+1 , y , k);
floodFill(ans , x-1 , y , k);
}
return;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    cin >> n >> m ;
	    for(int i =0 ; i < n ; i++)
	    {
	        for(int j = 0 ; j < m ; j++)
	        {
	            cin >> arr[i][j];
	        }
	    }
	    int x , y , k ;
	    cin >> x >> y >> k ;
	    int ans = arr[x][y];
	    floodFill(ans , x , y , k);
	    for(int i = 0;  i< n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
	    cout<<endl;
	}
	return 0;
}
