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
    int n,m,k;
    cin>>n>>m>>k;

    int arr1[n],arr2[m];
    un_set<int> s;

    for(int i = 0 ;i<n ; i++)
      cin>>arr1[i];

    for(int i = 0 ; i<m ; i++)
    {
      cin>>arr2[i];
      s.insert(arr2[i]);
    }

    int ans = 0;
    vector<pair<int,int>> v;
    for(int i = 0 ; i<n ; i++)
    {
      int temp = arr1[i];
      if(s.find(k-temp) != s.end())
      {
        ans++;
        v.pb(make_pair(temp,k-temp));
      }
    }

    if(ans == 0)
      cout<<-1<<endl;
    else
    {
      for(int i = 0 ; i<v.size()-1; i++)
      {
        cout<<v[i].ff<<" "<<v[i].ss<<", ";
      }
      cout<<v[v.size()-1].ff<<" "<<v[v.size()-1].ss;
    }
    cout<<endl;

  }
  return 0;

}
