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

int32_t main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n1,n2,n3;
    cin>>n1>>n2>>n3;

    int arr1[n1],arr2[n2],arr3[n3];

    unordered_set<int> s1,s2,s3,com;
    for(int i = 0 ; i<n1 ; i++)
    {
      cin>>arr1[i];
      s1.insert(arr1[i]);
    }

    for(int i = 0 ; i<n2 ; i++)
    {
      cin>>arr2[i];
      if(s1.find(arr2[i]) != s1.end())
        s2.insert(arr2[i]);
    }

    for(int i = 0 ; i<n3; i++)
    {
      cin>>arr3[i];

      if(s2.find(arr3[i]) != s2.end())
        s3.insert(arr3[i]);
    }

    if(s3.size() == 0)
    {
      cout<<-1<<endl;
      continue;
    }

    vector<int> v;
    for(int x: s3)
    {
      v.pb(x);
    }
    sort(v.begin(),v.end());
    for(int x:v)
    {
      cout<<x<<" ";
    }
    cout<<endl;
  }
  return 0;

}
