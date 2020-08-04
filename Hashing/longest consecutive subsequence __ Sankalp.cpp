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

using namespace std;

int32_t main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;

    int arr[n];
    unordered_set<int> s;
    for(int i = 0 ; i< n ; i++)
    {
      cin>>arr[i];
      s.insert(arr[i]);
    }

    int ans = 0;
    for(int i = 0 ; i<n ;i++)
    {
      if(s.find(arr[i]-1) == s.end())
      {
        int temp = 0;
        for(int j = arr[i] ; s.find(j) != s.end() ; j++ )
        {
          temp++;
        }
        ans = max(ans,temp);
      }

    }

    cout<<ans<<endl;

  }
  return 0;

}
