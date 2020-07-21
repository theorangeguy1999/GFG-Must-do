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

bool dp[10005][10005];

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

    int len = str.length();

    for(int i = 0 ; i<len; i++)
      dp[i][i] = true;

    for(int d = 1 ; d<len ; d++)
    {
      for(int i = 0 ; i+d<len ; i++)
      {
        int j = i+d;

        if(str[i] == str[j])
        {
          if(d>1)
            dp[i][j] = dp[i+1][j-1];
          else
            dp[i][j] = true;
        }
        else
        {
          dp[i][j] = false;
        }
      }
    }

    /*for(int i = 0 ; i<len ; i++)
    {
      for(int j = 0 ; j<len ; j++)
      {
        if(dp[i][j])
          cout<<1<<" ";
        else
          cout<<0<<" ";
      }
      cout<<endl;
    }*/

    int start , end;
    bool cond = false;

    for(int d = len-1 ; d>=0 ; d--)
    {
      for(int i = 0; i+d<len; i++)
      {
        int j = i+d;
        //cout<<i<<" "<<j<<endl;
        if(dp[i][j] == true)
        {
          start = i;
          end = j;
          cond = true;
          break;
        }
      }
      if(cond)
        break;
    }

    //cout<<start<<" "<<end<<endl;
    for(int i = start; i<=end ; i++)
      cout<<str[i];
    cout<<endl;
    
  }


  return 0;
}
