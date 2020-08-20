  
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
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
      cin>>arr[i];
    int k;
    cin>>k;

    int start = 0,end = n-1,pos;
    bool found = false;
    while(start <= end)
    {
      //cout<<"start: "<<start<<" End: "<<end<<endl;
      int mid = (start + end)/2;

      if(arr[mid] == k)
      {
        found = true;
        pos = mid;
      }
      if(arr[mid] < arr[start])
      {
        if(k > arr[mid] && k <= arr[end])
        {
          start = mid + 1;
        }
        else
          end = mid - 1;
      }
      else
      {
        if(k < arr[mid] && k >= arr[start])
        {
          end = mid - 1;
        }
        else
          start = mid + 1;
      }
    }

    if(found)
      cout<<pos<<endl;
    else
      cout<<-1<<endl;

  }
  return 0;

}
