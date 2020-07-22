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
    unordered_set<char> s1,s2;
    string a,b;
    cin>>a>>b;

    int freq1[26] = {0};
    int freq2[26] = {0};

    if(a.length() != b.length())
    {
      cout<<"NO"<<endl;
      continue;
    }
    for(int i = 0 ; i<a.length(); i++)
    {

      freq1[a[i] - 'a']++;
      freq2[b[i] - 'a']++;
      s1.insert(a[i]);
      s2.insert(b[i]);
    }

    if(s1.size() != s2.size())
    {
      cout<<"NO"<<endl;
      continue;
    }

    //cout<<freq1['o' - 'a']<<" "<<freq2['o' - 'a']<<endl;

    bool cond = true;
    for(char ch : s1)
    {
      if(freq1[ch - 'a'] != freq2[ch - 'a'])
      {
        //cout<<ch<<" ";
        cond = false;
        break;
      }
    }

    if(cond)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;

  }


  return 0;
}
