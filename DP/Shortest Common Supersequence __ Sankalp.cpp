  
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
    string str1,str2;
    cin>>str1>>str2;

    int n = str1.length();
    int m = str2.length();

    int dp[n+1][m+1] = {0};

    for(int i = 0 ; i<=n ; i++)
      dp[i][0] = i;

    for(int i = 0 ; i<=m ; i++)
      dp[0][i] = i;

    for(int i = 1 ; i<=n ; i++)
    {
      for(int j = 1 ; j<=m ; j++)
      {
        if(str1[i-1] == str2[j-1])
          dp[i][j] = dp[i-1][j-1] + 1;
        else
          dp[i][j] = 1 + min(dp[i-1][j],dp[i][j-1]);
      }
    }

    cout<<dp[n][m]<<endl;

  }
  return 0;

}
