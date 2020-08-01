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
    int k,n;
    cin>>k>>n;

    priority_queue<int,vector<int>,greater<int>> q;

    int i = 0;
    int num;
    while(n--)
    {
      cin>>num;
      if(i<k)
      {
        q.push(num);
        //cout<<-1<<" ";
        i++;
        if(i==k)
          cout<<q.top()<<" ";
        else
          cout<<-1<<" ";
        continue;
      }

      if(q.size() == k)
      {
        if(num <= q.top())
        {
          cout<<q.top()<<" ";
        }
        else
        {
          q.pop();
          q.push(num);
          cout<<q.top()<<" ";
        }
      }

    }
    cout<<endl;
  }
  return 0;

}
