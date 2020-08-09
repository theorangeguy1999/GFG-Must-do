  
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

bool dp[105][100005];
/*un_map<un_set<int>,bool> mp;
un_set<int> s;

bool func(int arr[],int pos, int sum1,int sum2,int n)
{
  if( pos >= n)
    return false;

  if(sum1 == sum2)
    return true;

  if(mp.count(s) != 0)
    return mp[s];


  bool op1 = func(arr,pos+1,sum1,sum2,n);
  mp[s] = op1;
  s.insert(arr[i]);
  bool op2 = func(arr,pos+1,sum1+arr[pos],sum2-arr[pos],n);
  mp[s] = op2;
  s.erase(arr[i]);

  return op1||op2;
}*/

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
    int sum = 0;
    for(int i = 0 ; i<n ; i++)
    {
      cin>>arr[i];
      sum = sum + arr[i];
    }
    if(sum%2 == 1)
    {
      cout<<"NO"<<endl;
      continue;
    }

    sum = sum/2;

    for(int i = 0 ; i<=sum ; i++)
      dp[0][i] = false;

    for(int j = 0 ; j<=n ; j++)
      dp[j][0] = true;

    for(int i = 1 ; i<=n ; i++)
    {
      for(int j = 1 ; j<=sum ; j++)
      {
        bool op1 = dp[i-1][j];
        bool op2 = false;
        if(j - arr[i] >= 0)
          op2 = dp[i-1][j-arr[i]];

        dp[i][j] = op1 || op2;
      }
    }

    bool cond = dp[n][sum];

    if(cond)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;

  }
  return 0;

}
