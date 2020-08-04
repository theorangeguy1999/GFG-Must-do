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
    int arr1[n],arr2[n];
    un_set<int> s;
    un_map<int,int> freq1,freq2;

    for(int i = 0 ; i<n ; i++)
    {
      cin>>arr1[i];
      freq1[arr1[i]]++;
    }
    for(int i = 0 ; i<n ; i++)
    {
      cin>>arr2[i];
      s.insert(arr2[i]);
      freq2[arr2[i]]++;
    }

    bool cond = false;
    for(int i = 0 ; i<n ; i++)
    {
      if(s.find(arr1[i]) == s.end())
      {
        cond = true;
        break;
      }
      else
      {
        if(freq1[arr1[i]] != freq2[arr1[i]])
        {
          cond = true;
          break;
        }
      }
    }

    if(cond)
      cout<<0<<endl;
    else
      cout<<1<<endl;

  }
  return 0;

}
