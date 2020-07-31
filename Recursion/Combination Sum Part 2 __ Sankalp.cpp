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

set<vector<int>> ans;
vector<int> temp;

void func(int arr[],int i, int sum, int n)
{
  if(sum==0)
  {
    vector<int> v = temp;
    ans.insert(v);
    return;
  }
  //cout<<"hi";
  if(i == n)
  {
    return;
  }

  if(sum < 0)
  {
  //  cout<<"HI";
    return;
  }

  //cout<<arr[i]<<" ";
  temp.pb(arr[i]);
  func(arr,i+1,sum-arr[i],n);
  temp.pop_back();

  func(arr,i+1,sum,n);

  return;


}

int32_t main()
{
  int t;
  cin>>t;
  
  while(t--)
  {
    ans.clear();
    temp.clear();
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
        cin>>arr[i];

    int s;
    cin>>s;

    sort(arr,arr+n);

    func(arr,0,s,n);

    if(ans.size() == 0)
      cout<<"Empty";
    else
    {
      for(vector<int> v:ans)
      {
        cout<<"(";
        for(int i = 0 ; i<v.size()-1 ; i++)
          cout<<v[i]<<" ";
        cout<<v[v.size()-1]<<")";
      }
    }
    cout<<endl;



  }
  return 0;

}
