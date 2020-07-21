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

bool check(string &a,string &b)
{
  int len = a.length();

  for(int i = 0 ; i<len ; i++)
  {
    if(a[i]!=b[(i+2)%len])
      return false;
  }

  return true;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);


  int t;
  cin>>t;

  while(t--)
  {
    string a,b;
    cin>>a>>b;

    int lena = a.length();
    int lenb = b.length();

    if(lena!=lenb)
    {
      cout<<0<<endl;
      continue;
    }

    bool clockwise = check(a,b);
    bool anticlockwise = check(b,a);


    if(clockwise || anticlockwise)
      cout<<1<<endl;
    else
      cout<<0<<endl;
  }


  return 0;
}
