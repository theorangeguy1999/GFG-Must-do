  
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
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0 ; i<n ; i++)
      cin>>arr[i];

    if(n == 1)
    {
      cout<<0<<endl;
      continue;
    }

    if(arr[0] == 0)
    {
      cout<<-1<<endl;
      continue;
    }

    int max_reach = arr[0];
    int jumps = 1;
    int steps = arr[0];

    bool cond = false;
    for(int i = 1 ; i<n ; i++)
    {
      if(i == n-1)
      {
        cond = true;
        break;
      }

      max_reach = max(max_reach,i + arr[i]);

      steps--;

      if(steps == 0)
      {
        jumps++;
        if( i >= max_reach)
        {
          cond = false;
          break;
        }
        else
          steps = max_reach - i;
      }
    }

    if(cond)
      cout<<jumps<<endl;
    else
      cout<<-1<<endl;

  }
  return 0;

}
