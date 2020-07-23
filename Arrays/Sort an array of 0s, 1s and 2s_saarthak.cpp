//Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.
//O(n) time soln with 1 iteration
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       ll n;
       cin>>n;
       vector<int> a(n);
       for(ll i=0;i<n;i++)
       cin>>a[i];
       ll i,j,k;
       k=n-1;
       i=0;
       j=0;
       while(j<=k)
       {
           switch (a[j])
           {
           case 1: j++;
                   break;
           case 2: swap(a[j],a[k--]);
                    break;
           case 0: swap(a[j],a[i]);
                    j++;
                    i++;
                    break;

           default:
               break;
           }

       }
       for(ll i=0;i<n;i++)
       cout<<a[i]<<" ";
       cout<<endl;
    
   
       

       
       

    }
    
}
