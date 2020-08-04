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

int32_t main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;

    int arr[n+1];
    for(int i = 1 ; i<=n ; i++)
      cin>>arr[i];

    int sum[n+1];
    sum[0] = 0;

    un_set<int> s;
    un_map<int,int> freq;
    for(int i = 1 ; i<=n ; i++)
    {
      sum[i] = sum[i-1] + arr[i];
      s.insert(sum[i]);
      freq[sum[i]]++;
    }

    int ans = 0;

    if(s.find(0) != s.end())
      ans = ans + freq[0];

    for(int x : s)
    {
      ans = ans + ((freq[x])*(freq[x] - 1))/2;
    }

    cout<<ans<<endl;

  }
  return 0;

}
