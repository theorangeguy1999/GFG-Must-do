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
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i = 0; i<n ; i++)
      cin>>arr[i];

    deque<int> q(k);

    for(int i = 0 ; i<k ; i++)
    {
      while(!q.empty() && arr[i] >= arr[q.back()])
        q.pop_back();
      q.push_back(i);
    }

    for(int i = k ; i<n ; i++)
    {
      cout<<arr[q.front()]<<" ";

      while(!q.empty() && q.front() <= i-k)
        q.pop_front();

      while(!q.empty() && arr[i] >= arr[q.back()])
        q.pop_back();

      q.push_back(i);
    }

    cout<<arr[q.front()]<<endl;
  }
  return 0;

}
