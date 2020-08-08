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

  int size = 100005;
  int dp[size];
  dp[0] = 0;
  dp[1] = 1;

  for(int i = 2 ; i<=size ; i++)
  {
    if(i%2 == 0)
    {
      dp[i] = min(dp[i/2],dp[i-1]) + 1;
    }
    else
      dp[i] = dp[i-1] + 1;
  }

  while(t--)
  {
    int n;
    cin>>n;

    cout<<dp[n]<<endl;


  }
  return 0;

}
