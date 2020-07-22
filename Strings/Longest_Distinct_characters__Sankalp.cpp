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

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);


  int t;
  cin>>t;

  while(t--)
  {
    string str;
    cin>>str;

    int ans = INT_MIN;
    int l=-1,r=0;

    unordered_set<char> s;
    while(r<str.length())
    {
      if(s.find(str[r]) == s.end())
      {
        s.insert(str[r]);
        ans = max(ans,r-l);
        r++;
      }
      else
      {
        while(s.find(str[r]) != s.end())
        {
          l++;
          s.erase(str[l]);
        }
      }

    }

    cout<<ans<<endl;
  }


  return 0;
}
