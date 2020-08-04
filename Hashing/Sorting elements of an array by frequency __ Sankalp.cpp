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

unordered_map<int,int> freq;

bool comp(int a , int b)
{
  if(freq[a] == freq[b])
    return a<b;
  else
    return freq[a]>freq[b];
}

int32_t main()
{
  int t;
  cin>>t;

  while(t--)
  {
    freq.clear();
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
    {
      cin>>arr[i];
      freq[arr[i]]++;
    }

    sort(arr,arr+n,comp);

    for(int i = 0 ; i< n ; i++)
      cout<<arr[i]<<" ";

    cout<<endl;

  }
  return 0;

}
