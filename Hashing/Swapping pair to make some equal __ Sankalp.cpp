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

    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    unordered_set<int> s;

    int sum1 = 0 ,sum2 = 0;
    for(int i = 0 ; i<n; i++)
    {
      cin>>arr1[i];
      sum1 = sum1 + arr1[i];
    }

    for(int i = 0 ;i<m ; i++)
    {
      cin>>arr2[i];
      sum2 = sum2 + arr2[i];
      s.insert(arr2[i]);
    }

    bool cond = false;

    int newsum = (sum1 + sum2);

    if((sum1 + sum2)%2 == 1)
    {
      cout<<-1<<endl;
      continue;
    }
    newsum = newsum/2;

    int diff = newsum - sum1;
    //cout<<diff<<endl;

    for(int i = 0 ; i<n ; i++)
    {
      if(s.find(arr1[i] + diff) != s.end())
      {
        cond = true;
        break;
      }
    }

    if(cond)
      cout<<1<<endl;
    else
      cout<<-1<<endl;

  }
  return 0;

}
