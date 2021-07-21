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
    int n,k;
    cin>>n>>k;

    int arr[n+1];
    for(int i = 1 ; i<=n ; i++)
      cin>>arr[i];

    int ans = -1;
    int s=1,e=1,sum=arr[1];
    bool cond = false;

    while(s <= n)
    {
      if(sum == k)
      {
        ans = s;
        cond = true;
        break;
      }
      else if(sum > k)
      {
        sum = sum-arr[s];
        s++;
      }
      else  if(sum <k)
      {
        e++;
        sum = sum + arr[e];
        if(e > n)
        {
          cond = false;
          break;
        }
      }
    } 

    if(cond)
      cout<<s<<" "<<e<<endl;
    else
      cout<<-1<<endl;

  }


  return 0;
}
