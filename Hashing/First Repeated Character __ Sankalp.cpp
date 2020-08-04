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

int32_t main()
{
  int t;
  cin>>t;

  while(t--)
  {
    string str;
    cin>>str;

    un_set<char> s;
    bool cond = true;
    int i;
    for( i = 0 ; str[i] != '\0' ; i++)
    {
      if(s.size() > 0 && s.find(str[i]) != s.end())
      {
        cond = false;
        break;
      }
      s.insert(str[i]);
    }

    if(!cond)
      cout<<str[i]<<endl;
    else
      cout<<-1<<endl;

  }
  return 0;

}
