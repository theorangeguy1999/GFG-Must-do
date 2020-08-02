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

unordered_map<int,int> mp;

bool comp(int a , int b)
{
  return mp[a]<mp[b];
}

int32_t main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n,m;
    cin>>n>>m;

    int arr1[n],arr2[m];

    for(int i = 0 ; i<n ; i++)
    {
      cin>>arr1[i];
      mp[arr1[i]] = INT_MAX;
    }

    for(int i = 0 ; i<m ; i++)
    {
      cin>>arr2[i];
      mp[arr2[i]] = i;
    }

    sort(arr1, arr1+n, comp);

    int pos = n;
    for(int i = 0 ; i<n ; i++)
    {
      if(mp[arr1[i]] == INT_MAX)
      {
        pos = i;
        break;
      }
    }

    sort(arr1+pos,arr1+n);

    for(int i = 0 ; i<n ; i++)
      cout<<arr1[i]<<" ";

    cout<<endl;

  }
  return 0;

}
