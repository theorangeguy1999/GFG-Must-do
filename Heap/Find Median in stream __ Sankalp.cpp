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
  int n;
  cin>>n;

  int median = 0;

  priority_queue<int> s;
  priority_queue<int,vector<int>,greater<int>> l;

  while(n--)
  {
    int num;
    cin>>num;

    if(s.size() > l.size())
    {
      if(num < median)
      {
        l.push(s.top());
        s.pop();
        s.push(num);
      }
      else
      {
        l.push(num);
      }

      median = s.top() + l.top();
      median = median/2;
    }
    else if(s.size() == l.size())
    {
      if(num > median)
      {
        l.push(num);
        median = l.top();
      }
      else
      {
        s.push(num);
        median = s.top();
      }
    }
    else
    {
      if(num > median)
      {
        s.push(l.top());
        l.pop();
        l.push(num);
      }
      else
      {
        s.push(num);
      }

      median = s.top() + l.top();
      median = median/2;
    }

    cout<<median<<endl;

  }

  return 0;

}
