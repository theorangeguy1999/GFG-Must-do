#define ll long long
//#define mod 1000000007
#define ff first
#define ss second
#define pb push_back
#define INF 1000000000
//#define MOD 1000000007
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

    int min_pos = 0 , max_pos = n-1 , mod = arr[n-1] + 1;

    for(int i = 0 ; i<n ; i++)
    {
      if(i&1)
      {
        arr[i] = arr[i] + (arr[min_pos]%mod)*mod;
        min_pos++;
      }
      else
      {
        arr[i] = arr[i] + (arr[max_pos]%mod)*mod;
        max_pos--;
      }
    }

    for(int i = 0 ; i<n ; i++)
      cout<<arr[i]/mod<<" ";

    cout<<endl;

    
  }


  return 0;
}
