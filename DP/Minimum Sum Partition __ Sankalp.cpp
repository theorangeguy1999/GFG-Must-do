  
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
    int n;
    cin>>n;

    int arr[n+1];
    int sum = 0;
    for(int i = 1 ; i<=n ; i++)
    {
      cin>>arr[i];
      sum = sum + arr[i];
    }

    bool dp[n+1][sum+1] = {0};

    for(int i =0 ; i<=sum ; i++)
      dp[0][i] = false;
    for(int i = 0 ; i<=n ; i++)
      dp[i][0] = true;


    for(int i =  1 ; i<=n ; i++)
    {
      for(int j = 1 ; j<=sum ; j++)
      {
        dp[i][j] = dp[i-1][j];
        if(j >= arr[i])
          dp[i][j] = dp[i][j] || dp[i-1][j - arr[i]];
      }
    }

    int ans = INT_MAX;
    for(int i = sum/2 ; i>=0 ; i--)
    {
      if(dp[n][i] == true)
      {
        ans = sum - 2*i;
        break;
      }
    }

    cout<<ans<<endl;

  }
  return 0;

}
