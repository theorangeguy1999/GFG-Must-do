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
    stack<string> st;
    string word = "";
    for(int i = 0 ; str[i] != '\0'; i++)
    {
      if(str[i] == '.')
      {
        st.push(word);
        word = "";
      }
      else
      {
        word = word + str[i];
      }
    }

    st.push(word);

    while(!st.empty())
    {
      string out = st.top();
      cout<<out;
      if(st.size()!=1)
        cout<<".";
      st.pop();
    }

    cout<<endl;
    
  }


  return 0;
}
