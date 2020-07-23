//Given an array A of N positive integers. Find the sum of maximum sum increasing subsequence of the given array.
// O(n^2) time O(n) space
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mxincsub(vector<ll> &a,ll n)
{
    ll dp[n],mx=0;
    for(ll i=0;i<n;i++)
    dp[i]=a[i];
    for(ll i=0;i<n-1;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                dp[j]=max(dp[j],dp[i]+a[j]);
            }
        }
    }
    for(ll i=0;i<n;i++)
    mx=max(mx,dp[i]);
    return mx;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
      ll n;
      cin>>n;
      vector<ll> a(n);
      for(ll i=0;i<n;i++)
      {
          cin>>a[i];
      }       
      cout<<mxincsub(a,n)<<endl;

    }
    
}
