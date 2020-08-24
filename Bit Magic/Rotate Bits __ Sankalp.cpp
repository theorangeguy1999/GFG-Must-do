  
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

int X[] = {-1,-1,0,1,1,1,0,-1};
int Y[] = {0,1,1,1,0,-1,-1,-1};

#define BITS 16

int leftshift(int n,int d)
{

  return ((1<<16)-1)&((n<<d) | (n>>(BITS - d)));
}

int rightshift(int n,int d)
{
  return ((1<<16)-1)&((n>>d)| (n<<(BITS - d)));
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;

  while(t--)
  {
    int n,d;
    cin>>n>>d;

    cout<<leftshift(n,d%16)<<endl<<rightshift(n,d%16)<<endl;

  }


  return 0;

}
