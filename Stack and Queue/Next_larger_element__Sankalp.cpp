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
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);


  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0 ; i<n ;i++)
      cin>>arr[i];

    stack<int> s;
    unordered_map<int,int> m;
    s.push(arr[0]);

    for(int i = 1; i<n ; i++)
    {
      if(s.empty())
      {
        s.push(arr[i]);
        continue;
      }

      while(!s.empty() && s.top() < arr[i])
      {
        m[s.top()] = arr[i];
        s.pop();
      }

      s.push(arr[i]);
    }

    while(!s.empty())
    {
      m[s.top()] = -1;
      s.pop();
    }

    for(int i = 0 ; i<n ; i++)
      cout<<m[arr[i]]<<" ";

    cout<<endl;

  }


  return 0;
}
