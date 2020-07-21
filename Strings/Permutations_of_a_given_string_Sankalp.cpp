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

    sort(str.begin(),str.end());

    do
    {
      cout<<str<<" ";
    }while(next_permutation(str.begin(),str.end()));

    cout<<endl;
    
  }


  return 0;
}
