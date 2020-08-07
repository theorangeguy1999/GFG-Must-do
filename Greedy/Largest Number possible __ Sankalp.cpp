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
    int n,s;
    cin>>n>>s;
    string out = "";

    if(s == 0)
    {
      cout<<-1<<endl;
      continue;
    }

    while(n--)
    {
      if(s<=9)
      {
        out = out + char(s + '0');
        s = 0;
      }
      else
      {
        out = out + '9';
        s = s - 9;
      }
    }

    if(s == 0)
      cout<<out<<endl;
    else
      cout<<-1<<endl;

  }
  return 0;

}
