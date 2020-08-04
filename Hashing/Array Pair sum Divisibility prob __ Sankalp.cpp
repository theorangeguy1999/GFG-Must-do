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
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0 ; i<n ; i++)
      cin>>arr[i];

    int m;
    cin>>m;

    unordered_map<int,int> freq;
    for(int i = 0 ; i<n ; i++)
    {
      freq[arr[i]%m]++;
    }

    bool cond = true;

    if(freq[0]%2==1)
    {
      cout<<"False"<<endl;
      continue;
    }

    for(int i = 1,j=m-1 ; i!=j && i<j; i++,j--)
    {
      if(freq[i] != freq[j])
      {
        cond = false;
        break;
      }
    }

    if(m%2 == 0)
    {
      if(freq[m/2]%2 == 1)
        cond = false;
    }

    if(cond)
      cout<<"True"<<endl;
    else
      cout<<"False"<<endl;

  }
  return 0;

}
