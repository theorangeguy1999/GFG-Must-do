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

  cin.ignore();
  while(t--)
  {
    string str;
    getline(cin,str);
    int freq[256] = {0};

    for(int i = 0 ;str[i] != '\0' ; i++)
    {
      if(freq[str[i]] == 0)
        freq[str[i]]++;
    }


    for(int i = 0 ; str[i] != '\0' ; i++)
    {
      if(freq[str[i]] != 0)
      {
        cout<<str[i];
        freq[str[i]]--;
      }
    }

    cout<<endl;
  }


  return 0;
}
