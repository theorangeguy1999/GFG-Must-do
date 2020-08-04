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
    string str,pat;
    cin>>str>>pat;

    if(pat.length() > str.length())
    {
      cout<<-1<<endl;
      continue;
    }

    int start = -1,end = -1;

    un_map<char,int> spat,s;

    for(int i = 0 ; pat[i] != '\0' ; i++)
      spat[pat[i]]++;

    int i = 0 , j = 0,count = 0;
    int ans = INT_MAX;

    while(j < str.length())
    {
      s[str[j]]++;

      if(spat.count(str[j]) != 0 && spat[str[j]] != 0 && s[str[j]] <= spat[str[j]])
        count++;

      if(count == pat.length())
      {

        while(s[str[i]] > spat[str[i]] || spat[str[i]] == 0)
        {
          if(s[str[i]] > spat[str[i]])
            s[str[i]]--;
          i++;
        }

        if(j-i+1 < ans)
        {
          ans = j-i+1;
          start = i;
          end = j;
        }
      }
      j++;
    }


    if(end != -1 && start != -1)
    {
      for(int k = start ; k <= end ; k++ )
        cout<<str[k];
    }
    else
      cout<<-1;
    cout<<endl;

  }
  return 0;

}
