//O(nlogn) soln
#include<bits/stdc++.h>
using namespace std;
typedef long ll;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,m,cnt=0;
        cin>>n>>m;
        vector<ll> a(n),b(m);
       // cout<<"Alloc\n";
        unordered_map<ll,ll> mp;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            a[i]=x;
            mp[x]++;
        }
        for(ll i=0;i<m;i++)
        {
            ll x;
            cin>>x;
            b[i]=x;
            for(ll i=0;i<mp[x];i++)
            {
                a[cnt++]=x;
            }
            mp[x]=0;
        }
        ll i=cnt;
        for(auto x:mp)
        {
            while (x.second--)
            {
                a[i++]=x.first;
            }
        }
        sort(a.begin()+cnt,a.end());
        for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
        
    }
    
}
