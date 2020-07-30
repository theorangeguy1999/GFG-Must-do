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

class Key
{
  public:
    int freq;
    char ch;

    Key()
    {
      freq = -1;
      ch = ' ';
    }
    Key(int x, char c)
    {
      freq = x;
      ch = c;
    }

    bool operator<(const Key &k) const
    {
      return freq<k.freq;
    }

};

int32_t main()
{
  int t;
  cin>>t;

  while(t--)
  {
    string str;
    cin>>str;
    unordered_map<char,int> freq;
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
      freq[str[i]]++;
    }

    priority_queue<Key> pq;

    for(auto p : freq)
    {
      int count = p.ss;
      char character = p.ff;
      Key temp(count,character);

      pq.push(temp);
    }

    /*while(!pq.empty())
    {
      Key temp = pq.top();
      cout<<temp.ch<<" "<<temp.freq<<endl;
      pq.pop();
    }*/

    Key prev;
    string out = "";

    while(!pq.empty())
    {
      Key temp = pq.top();
      pq.pop();

      out = out + temp.ch;
      temp.freq--;

      if(prev.freq > 0)
      {
        pq.push(prev);
      }
      prev = temp;
    }


    if(str.length() == out.length())
      cout<<1<<endl;
    else
      cout<<0<<endl;

  }

  return 0;

}
