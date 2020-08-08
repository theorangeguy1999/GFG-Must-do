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
    int n;
    cin>>n;
    int A[n],B[n];

    for(int i = 0 ; i<n ; i++)
      cin>>A[i];

    for(int i = 0 ; i<n ; i++)
      cin>>B[i];

    sort(A,A+n);
    sort(B,B+n,greater<int>());

    int ans = 0;

    for(int i = 0 ; i<n ; i++)
      ans = ans + (A[i]*B[i]);

    cout<<ans<<endl;


  }
  return 0;

}
