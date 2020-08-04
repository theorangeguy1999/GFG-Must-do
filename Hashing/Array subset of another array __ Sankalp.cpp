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
    int n,m;
    cin>>n>>m;

    int arr1[n],arr2[m];
    un_set<int> s;
    for(int i = 0 ; i< n ; i++)
    {
      cin>>arr1[i];
      s.insert(arr1[i]);
    }

    bool cond = true;
    for(int i = 0 ; i<m ; i++)
    {
      cin>>arr2[i];
      if(s.find(arr2[i]) == s.end())
        cond = false;
    }

    if(cond)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;

  }
  return 0;

}
