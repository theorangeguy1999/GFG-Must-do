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
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);


  int t;
  cin>>t;

  while(t--)
  {
    string str;
    cin>>str;

    int n = str.length();

    int dp[n][n] = {0};

    for(int d = 1 ; d<n; d++)
    {
      for(int i = 0 ; i+d<n ; i++)
      {
        int j = i+d;
        if(str[i] == str[j])
          dp[i][j] = dp[i+1][j-1];
        else
          dp[i][j] = 1 + min(dp[i+1][j],dp[i][j-1]);
      }
    }

    cout<<dp[0][n-1]<<endl;

  }


  return 0;
}
