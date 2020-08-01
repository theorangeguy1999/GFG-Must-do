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

int X[] = {-1,0,1,0};
int Y[] = {0,1,0,-1};

int32_t main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int r,c;
    cin>>r>>c;

    int arr[r][c];

    queue<pair<int,int>> q;

    for(int i = 0 ; i<r ; i++)
    {
      for(int j = 0; j<c ; j++)
      {
        cin>>arr[i][j];
        if(arr[i][j]==2)
          q.push(make_pair(i,j));
      }
    }

    q.push(make_pair(r,c));
    int ans = 0;
    while(!q.empty())
    {
      pair<int,int> p = q.front();
      q.pop();

      if(p == make_pair(r,c))
      {
        if(q.empty())
          break;
        else
        {
          q.push(make_pair(r,c));
          ans++;
        }
      }

      int i = p.ff;
      int j = p.ss;

      for(int k= 0 ; k<4 ; k++)
      {
        if(i + X[k] >= 0 && i + X[k] < r && j + Y[k] >=0 && j + Y[k] < c)
        {
          if(arr[i + X[k]][j + Y[k]] == 1)
          {
            arr[i + X[k]][j + Y[k]] = 2;
            q.push(make_pair(i + X[k], j + Y[k]));
          }
        }
      }

    }

    bool cond = true;
    for(int i = 0 ; i<r ; i++)
    {
      for(int j = 0 ; j<c ; j++)
      {
        if(arr[i][j] == 1)
           cond = false;
      }
    }

    if(cond)
      cout<<ans<<endl;
    else
      cout<<-1<<endl;


  }
  return 0;

}
