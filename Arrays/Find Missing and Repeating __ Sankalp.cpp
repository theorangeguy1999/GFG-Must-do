  
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

    int arr[n+1];
    for(int i = 1 ; i<=n ; i++)
      cin>>arr[i];

    int dupli = 0;
    for(int i = 1 ; i<=n ; i++)
    {
      if(arr[abs(arr[i])] < 0)
        dupli = abs(arr[i]);
      else
        arr[abs(arr[i])] = - arr[abs(arr[i])];
    }

    int missing = 0;
    for(int i = 1 ; i<=n ; i++)
      if(arr[i] > 0)
        missing = i;


    cout<<dupli<<" "<<missing<<endl;
  }


  return 0;

}
