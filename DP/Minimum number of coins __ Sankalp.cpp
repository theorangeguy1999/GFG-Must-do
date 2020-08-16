  
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

    int coins[] = {2000,500,200,100,50,20,10,5,2,1};// {1,2,5,10,20,50,100,200,500,2000};

    pair<int,int> dp[n+1];
    dp[0] = make_pair(0,0);

    for(int i = 1 ; i<=n ; i++)
    {
      dp[i] = make_pair(0,INT_MAX);
      for(int coin : coins)
      {
        if(i - coin >= 0)
        {
          if(dp[i-coin].second + 1 < dp[i].second)
          {
            dp[i].second = dp[i-coin].second + 1;
            dp[i].first = coin;
          }
        }
      }
    }

    for(int i = n ; i!= 0 ;i = i - dp[i].first)
      cout<<dp[i].first<<" ";
    cout<<endl;

  }
  return 0;

}
