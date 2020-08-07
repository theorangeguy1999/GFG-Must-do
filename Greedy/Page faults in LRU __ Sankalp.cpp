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

int X[] = {-1,0,1,0};
int Y[] = {0,1,0,-1};

int32_t main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
      cin>>arr[i];
    int cap;
    cin>>cap;

    un_set<int> mem;
    un_map<int,int> LU;

    int ans = 0;

    for(int i = 0 ; i<n ; i++)
    {
      if(mem.find(arr[i]) != mem.end())
      {
        LU[arr[i]] = i;
      }
      else
      {
        ans++;
        if(mem.size() == cap)
        {
          int LRUP = *mem.begin();
          for(int p:mem)
          {
            if(LU[p] < LU[LRUP])
              LRUP = p;
          }

          mem.erase(LRUP);
          mem.insert(arr[i]);
          LU[arr[i]] = i;
        }
        else
        {
          mem.insert(arr[i]);
          LU[arr[i]] = i;
        }
      }
    }

    cout<<ans<<endl;

  }
  return 0;

}
