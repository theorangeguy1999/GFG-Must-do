  
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

    for(int i = 1 ; i<=n ; i++)
      cin>>arr[i];
    arr[0] =INT_MIN;

    int dp[n+1];

    dp[0] = 0;

    for(int i = 1 ; i<=n ; i++)
    {
      dp[i] = arr[i];
      for(int j = i-1 ; j>=0 ; j--)
      {
        if(arr[i] > arr[j])
          dp[i]= max(dp[i],dp[j] + arr[i]);
      }
    }

    int ans = INT_MIN;

    for(int i = 0 ; i<=n ; i++)
      ans = max(ans,dp[i]);

    //cout<<endl;
    cout<<ans<<endl;

  }
  return 0;

}
