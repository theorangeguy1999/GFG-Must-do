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

    string arr[n];
    for(int i = 0 ; i<n ; i++)
    {
      cin>>arr[i];
    }

    string lcp = arr[0];

    for(int i = 1 ; i<n ; i++)
    {
      if(lcp == "")
      {
        break;
      }

      string cur_lcp = "";
      for(int j = 0 ; j<min(lcp.length(),arr[i].length()); j++)
      {
        if(arr[i][j] != lcp[j])
          break;
        else
          cur_lcp = cur_lcp + arr[i][j];
      }

      lcp = cur_lcp;
    }

    if(lcp == "")
      cout<<-1<<endl;
    else
      cout<<lcp<<endl;

  }


  return 0;
}
