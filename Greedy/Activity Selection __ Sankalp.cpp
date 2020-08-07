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

struct Activity
{
  int st;
  int et;
};

bool comp(const Activity &A,const Activity &B)
{
  return A.et < B.et;
}

int32_t main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;

    Activity arr[n];

    for(int i = 0 ; i<n ; i++)
      cin>>arr[i].st;
    for(int i = 0 ; i<n ; i++)
      cin>>arr[i].et;

    sort(arr,arr+n,comp);

    Activity cur_act;
    cur_act.et = cur_act.st = -1;

    int ans = 0;
    for(int i = 0 ; i<n ; i++)
    {
      if(arr[i].st >= cur_act.et)
      {
        ans++;
        cur_act = arr[i];
      }
    }

    cout<<ans<<endl;

  }
  return 0;

}
