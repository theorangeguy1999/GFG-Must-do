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
  int num;
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
    {
      cin>>arr[i].et;
      arr[i].num = i+1;
    }

    sort(arr,arr+n,comp);

    Activity cur_act;
    cur_act.et = cur_act.st = -1;
    cur_act.num = -1;

    vector<int> ans;
    for(int i = 0 ; i<n ; i++)
    {
      if(arr[i].st >= cur_act.et)
      {
        ans.pb(arr[i].num);
        cur_act = arr[i];
      }
    }

    for(int x:ans)
      cout<<x<<" ";

    cout<<endl;

  }
  return 0;

}
