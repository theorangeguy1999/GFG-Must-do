  
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
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
      cin>>arr[i];

    int start = 0 ,end = n-1;

    while(start<end)
    {
      int mid = (start + end)/2;

      if(mid >=0 && mid <=n-1 && arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1])
      {
        start = mid;
        break;
      }

      if(mid%2 == 0)
      {
        if(mid==n-1)
          break;
        if(arr[mid] == arr[mid+1])
          start = mid+1;
        else
          end = mid-1;
      }
      else
      {
        if(mid == 0)
          break;
        if(arr[mid] == arr[mid-1])
          start = mid+1;
        else
          end = mid-1;

      }
    }

    cout<<arr[start]<<endl;
  }
  return 0;

}
