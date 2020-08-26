  
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

int grid[100][100] = {0};
int mcp[100][100] = {0};
int n;

struct cell
{
  int x,y,distance;

  cell(int a,int b,int c)
  {
    x = a;
    y = b;
    c = distance;
  }
};

bool operator <(const cell &a, const cell &b)
{
  if(a.distance == b.distance)
  {
    if(a.x == b.x)
      return a.y <b.y;
    else
      return a.x < b.x;
  }
  else
    return a.distance < b.distance;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;

  while(t--)
  {
    cin>>n;
    for(int i = 0 ; i<n ; i++)
      for(int j = 0 ; j<n ; j++)
        cin>>grid[i][j];

    for(int i = 0 ; i<n ; i++)
      for(int j = 0 ; j<n ; j++)
        mcp[i][j] = INT_MAX;

    mcp[0][0] = grid[0][0];

    set<cell> s;
    s.insert(cell(0,0,0));
    int cnt = 0;
    while(!s.empty())
    {
      cnt++;
      cell k = *s.begin();
      s.erase(s.begin());

      for(int i  = 0 ; i<4 ; i++)
      {
        int x = k.x + X[i];
        int y = k.y + Y[i];

        if(x < 0 || x >= n || y < 0 || y >= n )
          continue;

        if(mcp[x][y] > mcp[k.x][k.y] + grid[x][y])
        {
          if(mcp[x][y] != INT_MAX)
            if(s.find(cell(x,y,mcp[x][y])) != s.end())
              s.erase(s.find(cell(x,y,mcp[x][y])));
          mcp[x][y] = mcp[k.x][k.y] + grid[x][y];
          s.insert(cell(x,y,mcp[x][y]));
        }
      }
      //cout<<k.x<<" "<<k.y<<" "<<mcp[k.x][k.y]<<endl;

    }
    //cout<<cnt<<endl;
    cout<<mcp[n-1][n-1]<<endl;

  }


  return 0;

}
