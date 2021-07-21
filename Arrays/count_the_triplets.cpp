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
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0 ; i<n ; i++)
      cin>>arr[i];

    sort(arr,arr+n);

    int ans = 0;

    for(int i = n-1 ; i>=2 ; i--)
    {
      int j = 0, k = i-1;
      while(j<k)
      {
        int sum = arr[j] + arr[k];
        if(sum == arr[i])
        {
          ans++;
          j++;
          k--;
        }
        else if(sum > arr[i])
        {
          k--;
        }
        else if(sum < arr[i])
        {
          j++;
        }
      }
    }

    if(ans == 0)
      cout<<-1<<endl;
    else
      cout<<ans<<endl;



  }


  return 0;
}
