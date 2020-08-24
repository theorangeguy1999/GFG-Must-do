  
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

int X[] = {-1,-1,0,1,1,1,0,-1};
int Y[] = {0,1,1,1,0,-1,-1,-1};

int dp[1005];

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;

  dp[0] = 0;
  for(int i = 1 ; i<= 1000 ; i++)
  {
    dp[i] = dp[i-1] + __builtin_popcount(i);
  }

  while(t--)
  {
    int n;
    cin>>n;
    cout<<dp[n]<<endl;

  }


  return 0;

}
