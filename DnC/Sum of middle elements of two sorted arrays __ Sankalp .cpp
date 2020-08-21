  
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

int kth(int arr1[],int n,int arr2[],int m, int k)
{
  /*for(int i = 0 ; i<n ; i++)
    cout<<arr1[i]<<" ";
  cout<<endl;
  for(int i = 0 ; i<m ; i++)
    cout<<arr2[i]<<" ";
  cout<<endl<<endl;*/

  if(k>(m+n) || k<1 )
    return -1;

  if(n > m)
    return kth(arr2,m,arr1,n,k);

  if(n == 0)
    return arr2[k-1];

  if(k == 1)
    return min(arr1[0],arr2[0]);

  int i = min(n,k/2),j = min(m,k/2);

  if(arr1[i-1] > arr2[j-1])
    return kth(arr1,n,arr2 + j, m-j,k-j);
  else
    return kth(arr1 + i,n-i,arr2,m,k-i);
}

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
    int arr1[n],arr2[n];
    for(int i = 0 ; i<n ; i++)
      cin>>arr1[i];
    for(int i = 0 ; i<n ; i++)
      cin>>arr2[i];

    cout<<kth(arr1,n,arr2,n,n) + kth(arr1,n,arr2,n,n+1)<<endl;

  }
  return 0;

}
