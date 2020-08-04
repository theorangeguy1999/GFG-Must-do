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
    int n,k;
    cin>>n>>k;

    int arr[n];
    un_map<int,int> freq;
    int ans = -1;

    for(int i = 0 ; i<n ; i++)
    {
      cin>>arr[i];
      freq[arr[i]]++;
    }

    for(int i = 0 ; i<n ; i++)
    {
      if(freq[arr[i]] == k)
      {
        ans = arr[i];
        break;
      }
    }

    cout<<ans<<endl;

  }
  return 0;

}
