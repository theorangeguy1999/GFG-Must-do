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

int n,m;

int count(int x, int y)
{
  if(x == 1 && y== 1)
    return 1;
  if (x<1 || y<1)
    return 0;

  return count(x-1,y) + count(x,y-1);
}

int32_t main()
{
  int t;
  cin>>t;
  
  while(t--)
  {
    //int n,m;
    cin>>n>>m;

    int ans = count(n,m);
    cout<<ans<<endl;
  }
  return 0;

}
