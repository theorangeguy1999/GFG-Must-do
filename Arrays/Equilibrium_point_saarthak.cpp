//Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in the array. 
//Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of elements after it.
//O(n) time O(n) space soln
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       ll n,ans=-1;
       cin>>n;
       vector<ll> a(n),cm(n);
       cin>>a[0];
       cm[0]=a[0];
       for(ll i=1;i<n;i++)
       {
           cin>>a[i];
           cm[i]=cm[i-1]+a[i];
       }
       if(n==1)
       {
           cout<<1<<endl;
           continue;
       }
       if(n==2)
       {
           cout<<-1<<endl;
           continue;
       }
       for(ll i=1;i<n-1;i++)
       {
           if(cm[i-1]==cm[n-1]-cm[i])
           {
               ans=i+1;
               break;
           }
       }
       cout<<ans<<endl;   
    }
    
}
