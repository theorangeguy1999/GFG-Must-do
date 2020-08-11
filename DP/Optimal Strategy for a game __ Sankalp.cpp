  
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

int dp[105][105];

int func(int arr[],int i, int j)
{
  if( j - i == 1)
    return max(arr[i],arr[j]);

  if(i == j)
    return arr[i];

  if(dp[i][j] != -1)
    return dp[i][j];

  int op1 = arr[i] + min(func(arr,i+1,j-1),func(arr,i+2,j));
  int op2 = arr[j] + min(func(arr,i+1,j-1),func(arr,i,j-2));

  int ans = max(op1,op2);

  return dp[i][j] = ans;
}

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

    int arr[n];
    for(int i = 0 ; i<n ; i++)
      cin>>arr[i];

    for(int i = 0 ; i<n ; i++)
      for(int j = 0 ; j<n ; j++)
        dp[i][j] = -1;

    int ans = func(arr,0,n-1);

    cout<<ans<<endl;

  }
  return 0;

}
