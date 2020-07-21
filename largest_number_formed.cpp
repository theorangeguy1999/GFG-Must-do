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

unordered_map<int,int> digits;

bool compare(int a, int b)
{
  int da = digits[a];
  int db = digits[b];
  int hcf = __gcd(da,db);
  int lcm = (da*db)/hcf;

  int numa = a;
  int numb = b;
  for(int i = 1 ; i<(lcm/da) ; i++)
  {
    numa = numa*pow(10,da) + a;
  }

  for(int i = 1 ; i<(lcm/db) ; i++)
  {
    numb = numb*pow(10,db) + b;
  }

  //cout<<numa<<" "<<numb<<" HIII" <<endl;
  return numb<numa;


}

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

    for(int i = 0 ; i<n ; i++)
    {
      int dig = 0,temp = arr[i];
      while(temp)
      {
        temp = temp/10;
        dig++;
      }

      digits[arr[i]] = dig;
    }


    //cout<<compare(54,548)<<endl;
    sort(arr,arr+n,compare);

    for(int i = 0 ; i<n ; i++)
      cout<<arr[i];

    cout<<endl;



  }


  return 0;
}