#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define ff first
#define ss second
#define pb push_back
#define INF 1000000000
#define MOD 1000000007
#define int long long

using namespace std;

int n,m;
int X[] = {-1,0,1,0};
int Y[] = {0,1,0,-1};
void floodfill(int arr[][101], int i,int j, int tofill, int check)
{
  if(arr[i][j] != check)
    return;

  arr[i][j] = tofill;

  for(int k = 0 ; k<4 ; k++)
  {
    if(i + X[k] >=0 && i+X[k] <n && j+Y[k] >=0 && j+Y[k] <m)
    {
      floodfill(arr,i+X[k],j+Y[k],tofill,check);
    }
  }
}

int32_t main()
{
  int t;
  cin>>t;
  
  while(t--)
  {
    //int n,m;
    cin>>n>>m;

    int arr[n][101];
    for(int i = 0 ; i<n ; i++)
      for(int j = 0 ; j<m ; j++)
        cin>>arr[i][j];

    int x,y;
    cin>>x>>y;
    int tofill;
    cin>>tofill;

    floodfill(arr,x,y,tofill,arr[x][y]);

    for(int i = 0 ; i<n ; i++)
      for(int j = 0 ; j<m ; j++)
        cout<<arr[i][j]<<" ";

    cout<<endl;
  }

  return 0;

}
