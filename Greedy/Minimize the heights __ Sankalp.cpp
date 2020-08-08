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
    int k;
    cin>>k;
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0 ; i<n ;i++)
      cin>>arr[i];

    int min_val = INT_MAX,max_val = INT_MIN;

    for(int i = 0 ; i <n ; i++)
    {
      min_val = min(min_val,arr[i]);
      max_val= max(max_val,arr[i]);
    }

    if((max_val - min_val)<=k)
    {
      cout<<max_val-min_val<<endl;
      continue;
    }

    float avg = (min_val + max_val)/2.0;

    for(int i = 0 ; i<n ; i++)
    {
      if(arr[i] > avg)
        arr[i] = arr[i] - k;
      else
        arr[i] = arr[i] + k;
    }

    min_val = INT_MAX;
    max_val = INT_MIN;
    for(int i = 0 ; i <n ; i++)
    {
      min_val = min(min_val,arr[i]);
      max_val= max(max_val,arr[i]);
    }

    int ans = max_val - min_val;

    cout<<ans<<endl;


  }
  return 0;

}
