#define ll long long
#define mod 1000000007
#define ff first
#define ss second
#define pb push_back
#define INF 1000000000
#define MOD 1000000007
#define int long long

using namespace std;

//int arr[10000005];
//int pre[10000005];

int32_t main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;
    int arr[n+1];
    int pre[n+1];
    for(int i = 1 ; i<=n ; i++)
      cin>>arr[i];

    int max_sum = INT_MIN;
    pre[0] = 0;
    for(int i = 1 ; i<=n ; i++)
    {
      if(pre[i-1] + arr[i] > 0)
      {
        pre[i]= pre[i-1] + arr[i];
      }
      else
      {
        pre[i] = 0;
      }

      //cout<<pre[i]<<" ";

      max_sum = max(max_sum,pre[i]);
    }

    if(max_sum == 0)
    {
      int temp = INT_MAX;
      for(int i = 1 ; i<=n ; i++)
      {
        temp = min(temp,(-arr[i]));
      }
      max_sum= -temp;
    }

    cout<<max_sum<<endl;
  }


  return 0;
}
