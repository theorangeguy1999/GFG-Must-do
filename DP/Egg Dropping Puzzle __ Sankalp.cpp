  
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
    int n,k;
    cin>>n>>k;

    int dp[n+1][k+1];

    for(int i = 0 ; i<=n ; i++)
    {
      dp[i][0] = 0;
      dp[i][1] = 1;
    }
    for(int i = 0 ; i<=k ; i++)
      dp[1][i] = i;

    for(int i = 2 ; i<=n ; i++)
    {
      for(int j = 2 ; j<=k ; j++)
      {
        dp[i][j] = INT_MAX;
        for(int l = 1 ; l<=j ; l++)
        {
          dp[i][j] = min(dp[i][j], 1 + max(dp[i-1][l-1],dp[i][j-l]));
        }
      }
    }

    cout<<dp[n][k]<<endl;

  }
  return 0;

}
