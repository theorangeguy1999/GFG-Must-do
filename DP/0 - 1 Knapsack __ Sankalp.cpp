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

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;

  while(t--)
  {
    int n,w;
    cin>>n>>w;
    int val[n+1];
    int wt[n+1];

    for(int i = 1 ; i<=n ; i++)
      cin>>val[i];

    for(int i = 1 ; i<=n ; i++)
      cin>>wt[i];

    int dp[n+1][w+1];

    for(int i = 0 ; i<=n ; i++)
      dp[i][0] = 0;
    for(int j = 0 ; j<=w ; j++)
      dp[0][j] = 0;

    for(int i = 1 ; i<=n ; i++)
    {
      for(int j = 1 ; j<=w ; j++)
      {
        dp[i][j] = dp[i-1][j];

        if( j - wt[i] >= 0)
          dp[i][j] = max(dp[i][j], val[i] + dp[i-1][j-wt[i]]);
      }
    }


    cout<<dp[n][w]<<endl;


  }
  return 0;

}
