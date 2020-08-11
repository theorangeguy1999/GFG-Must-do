  
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

    int dp[n+1];
    dp[0] = 1;

    for(int i = 1 ; i<=n ; i++)
    {
      dp[i] = 0;
      if(i-1>= 0 )
        dp[i] = dp[i] + dp[i-1];
      if(i-2>= 0 )
        dp[i] = dp[i] +dp[i-2];
      if(i-3>= 0 )
        dp[i] = dp[i] + dp[i-3];

      //cout<<dp[i]<<" ";
    }
    //cout<<endl;
    cout<<dp[n]<<endl;

  }
  return 0;

}
