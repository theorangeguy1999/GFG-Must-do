#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define ff first
#define ss second
#define pb push_back
#define INF 1000000000
#define MOD 1000000007
#define int long long
#define un_map unordered_map
#define un_set unordered_set

using namespace std;

int X[] = {-1,0,1,0};
int Y[] = {0,1,0,-1};

bool func(pair<int,int> point,int mat[30][30],bool visited[30][30],int n)
{
  int i = point.first,j = point.second;
  if(mat[i][j] == 2)
    return true;

  if(visited[i][j] == true)
    return false;
  visited[i][j] = true;

  if(mat[i][j] == 0)
    return false;
  
  bool ans = false;
  for(int k = 0 ; k<4 ; k++)
  {
    if(i+X[k] >= 0 &&  i+X[k] <n  && j+Y[k] >= 0 && j+Y[k] <n)
    {
      ans = ans || func(make_pair(i+X[k],j+Y[k]),mat,visited,n);
    }
  }

  return ans;

}

int32_t main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;
    pair<int,int> source,destination;

    int mat[30][30];
    for(int i = 0 ; i<n ; i++)
    {
      for(int j = 0 ; j<n ; j++)
      {
        cin>>mat[i][j];
        if(mat[i][j] == 1)
          source =make_pair(i,j);
        if(mat[i][j] == 2)
          destination = make_pair(i,j);
      }
    }

    bool visited[30][30];
    for(int i = 0 ; i<n ; i++)
      for(int j = 0 ; j<n ; j++)
        visited[i][j] = false;

    bool cond = func(source,mat,visited,n);

    if(cond)
      cout<<1<<endl;
    else
      cout<<0<<endl;


  }
  return 0;

}
