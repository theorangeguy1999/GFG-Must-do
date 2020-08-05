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
    un_map<char,int> freq;

    for(int i = 0 ; str[i]!= '\0' ; i++)
    {
      freq[str[i]]++;
    }

    bool cond = false;
    un_set<int> s;

    for(auto p: freq)
    {
      s.insert(p.ss);
    }

    if(s.size() == 1)
    {
      cout<<1<<endl;
      continue;
    }



    for(int i = 0 ; str[i]!= '\0' ; i++)
    {
      freq[str[i]]--;
      int temp = 0;
      //temp = (freq[str[i]] != 0)?freq[str[i]]:freq[s];
      if(freq[str[i]] != 0)
        temp = freq[str[i]];
      else
      {
        if(i == 0)
          temp = freq[str[i+1]];
        else
          temp = freq[str[i-1]];
      }
      int j = 0;

      for(j = 0 ; str[j] != '\0' ; j++)
      {
          if(freq[str[j]] != 0)
            if(freq[str[j]] != temp)
              break;
      }

      if( j == str.length())
      {
        cond = true;
        break;
      }
      freq[str[i]]++;
    }

    if(cond)
      cout<<1<<endl;
    else
      cout<<0<<endl;

  }
  return 0;

}
