  
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
    int n,m;
    cin>>m;

    int arr[m+1];

    for(int i = 1 ; i<=m ; i++)
      cin>>arr[i];

    cin>>n;

    int dp[m+1][n+1];

    for(int i = 0 ; i<=n ; i++)
      dp[0][i] = 0;

    for(int i = 0 ; i<=m ; i++)
      dp[i][0] = 1;

    for(int i = 1 ; i<=m; i++)
    {
      for(int j = 1 ; j<=n ; j++)
      {
        int a = 0 , b = 0;
        a = dp[i-1][j];
        if(j - arr[i] >= 0)
          b = dp[i][j - arr[i]];

        dp[i][j] = a + b;
      }
    }

    cout<<dp[m][n]<<endl;

  }
  return 0;

}
