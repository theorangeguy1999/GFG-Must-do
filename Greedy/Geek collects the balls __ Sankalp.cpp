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
    int n,m;
    cin>>n>>m;

    int road1[n],road2[m];

    for(int i =0 ; i<n ; i++)
      cin>>road1[i];
    for(int j = 0 ; j<m ; j++)
      cin>>road2[j];

    int i = 0 , j= 0;
    int ans = 0,sum1 = 0,sum2 = 0;

    while(i<n && j<m)
    {
      if(road1[i] == road2[j])
      {
        int count = 0;
        int temp = road1[i];
        while(i<n && road1[i] == temp)
        {
          i++;
          count++;
        }
        while(j<m && road2[j] == temp)
        {
          j++;
          count++;
        }
        ans = ans + max(sum1,sum2) + (temp*(count-1));
        sum1 = 0;
        sum2 = 0;
      }
      else if(road1[i] < road2[j])
      {
        sum1 = sum1 + road1[i];
        i++;
      }
      else if(road1[i] > road2[j])
      {
        sum2 = sum2 + road2[j];
        j++;
      }
    }

    while(i<n)
    {
      sum1 = sum1 + road1[i];
      i++;
    }

    while(j<m)
    {
      sum2 = sum2 + road2[j];
      j++;
    }

    ans = ans + max(sum1,sum2);

    cout<<ans<<endl;

  }
  return 0;

}
