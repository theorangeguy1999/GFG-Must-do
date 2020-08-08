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

    for(int i = 0 ; i<n; i++)
      cin>>arr[i];

    sort(arr,arr+n);

    int ans1 = 0,ans2 = 0;

    int i = 0 ,j = n-1;

    while(i<=j)
    {
      ans1 = ans1 + arr[i];
      i++;
      j = j-k;
    }


    i = n-1;
    j = 0;
    while(i>=j)
    {
      ans2 = ans2 + arr[i];
      i--;
      j = j+k;
    }

    cout<<ans1<<" "<<ans2<<endl;


  }
  return 0;

}
