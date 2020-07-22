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

unordered_map<char,int> int_val;

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);


  int t;
  cin>>t;
  int_val['I'] = 1;
  int_val['V'] = 5;
  int_val['X'] = 10;
  int_val['L'] = 50;
  int_val['C'] = 100;
  int_val['D'] = 500;
  int_val['M'] = 1000;

  while(t--)
  {
    string str;
    cin>>str;

    int ans = 0,i =0;
    for( i = 0 ; str[i+1] != '\0' ; i++)
    {
      if(int_val[str[i+1]] > int_val[str[i]])
      {
        ans = ans - int_val[str[i]];
      }
      else
        ans = ans + int_val[str[i]];
    }

    ans = ans + int_val[str[i]];

    cout<<ans<<endl;

  }


  return 0;
}
