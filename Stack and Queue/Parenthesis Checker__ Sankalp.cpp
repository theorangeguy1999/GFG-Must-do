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

    stack<char> s;

    int len = str.length();

    for(int i = len-1 ; i>=0 ; i--)
    {
      char ch = str[i];

      if(str[i] == '(' && !s.empty())
      {
        if(s.top() == ')' )
          s.pop();
        else
          break;
      }
      else if(str[i] == '{' && !s.empty())
      {
        if(s.top() == '}')
          s.pop();
        else
          break;
      }
      else if(str[i] == '[' && !s.empty())
      {
        if(s.top() == ']')
          s.pop();
        else
          break;
      }
      else
        s.push(ch);
    }

    if(s.empty())
      cout<<"balanced"<<endl;
    else
      cout<<"not balanced"<<endl;

  }


  return 0;
}
