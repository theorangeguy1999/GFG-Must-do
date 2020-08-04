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
    string str,patt;
    cin>>str>>patt;

    un_set<char> s;
    for(int i = 0 ; patt[i]!='\0'; i++)
    {
      s.insert(patt[i]);
    }

    char ans = '$';

    for(int i = 0 ; str[i] != '\0' ; i++)
    {
      if(s.find(str[i]) != s.end())
      {
        ans =  str[i];
        break;
      }
    }

    cout<<ans<<endl;
  }
  return 0;

}
