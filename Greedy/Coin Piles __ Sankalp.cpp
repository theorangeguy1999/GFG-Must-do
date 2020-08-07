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

int X[] = {-1,0,1,0};
int Y[] = {0,1,0,-1};

int32_t main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i = 0 ; i<n ; i++)
      cin>>arr[i];

    sort(arr,arr+n);

    int rc = 0;
    int final_ans = INT_MAX;
    for(int i = 0 ; i<n ; i++)
    {
      int th = arr[i] + k;
      int ans = rc;
      for(int j = i ; j<n ; j++)
      {
        if(arr[j] > th)
          ans = ans + (arr[j] - th); 
      }
      rc =rc+arr[i];
      final_ans = min(final_ans,ans);
    }

    cout<<final_ans<<endl;
  }
  return 0;

}
