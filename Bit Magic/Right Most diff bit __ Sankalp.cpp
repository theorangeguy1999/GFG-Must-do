  
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

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;

  while(t--)
  {
    int m,n;
    cin>>m>>n;

    if(m == n)
    {
      cout<<-1<<endl;
      continue;
    }

    int cnt = 1;

    while(m!= 0 || n!= 0)
    {
      if((m&1) != (n&1))
        break;
      m = m>>1;
      n = n>>1;
      cnt++;
    }

    cout<<cnt<<endl;

  }


  return 0;

}
