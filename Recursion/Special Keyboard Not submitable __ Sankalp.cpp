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

int32_t main()
{
  int t;
  cin>>t;
  
  while(t--)
  {
    int n;
    cin>>n;
    if(n > 75)
    {
      cout<<-1<<endl;
      continue;
    }

    int dp[n+1];

    for(int i = 1 ; i<=6 ; i++)
        dp[i] = i;

    for(int i = 7 ; i<=n ;i++)
    {
      dp[i] = INT_MIN;
      for(int j = i-3 ;j >=1 ; j--)
      {
        int temp = dp[j] * (i-j-1);
        dp[i] = max(dp[i],temp);
      }
    }

    cout<<dp[n]<<endl;


  }
  return 0;

}
