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
    int arr[n];
    int sum = 0;
    for(int i = 0 ; i<n-1 ; i++)
    {
      cin>>arr[i];
      sum = sum + arr[i];
    }

    int sup_sum = ((n)*(n+1))/2;

    int ans = sup_sum - sum;

    cout<<ans<<endl;



  }


  return 0;
}
