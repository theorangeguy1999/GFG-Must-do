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
  int t;
  cin>>t;

  while(t--)
  {
    unordered_map<char,int> freq;
    char ch;
    queue<char> q;
    int n;
    cin>>n;

    while(n--)
    {
      cin>>ch;
      freq[ch]++;
      if(freq[ch] == 1 )
        q.push(ch);

      while(!q.empty() && freq[q.front()] != 1 )
      {
        q.pop();
      }

      if(!q.empty())
        cout<<q.front()<<" ";
      else
        cout<<-1<<" ";
    }

    cout<<endl;

  }
  return 0;

}
