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
    string str1,str2;
    cin>>str1>>str2;

    un_set<char> s,com;

    for(int i = 0 ; str1[i] != '\0' ; i++)
      s.insert(str1[i]);

    for(int i = 0 ; str2[i] != '\0' ; i++)
    {
      if(s.find(str2[i]) != s.end())
        com.insert(str2[i]);
    }

    set<char> ans;

    for(int i = 0 ; str1[i] != '\0' ; i++)
    {
      if(com.find(str1[i]) == com.end())
        ans.insert(str1[i]);
    }

    for(int i = 0 ; str2[i] != '\0' ; i++)
    {
      if(com.find(str2[i]) == com.end())
        ans.insert(str2[i]);
    }

    for(char ch: ans)
      cout<<ch;
    cout<<endl;

  }
  return 0;

}
