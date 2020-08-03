#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	//code
	int t;
	cin >> t ;
	while(t--)
	{
	    ll n1 , n2 , n3 ;
	    cin >> n1 >> n2 >> n3;
	    vector<ll>v(n1);
	    vector<ll>w(n2);
	    vector<ll>x(n3);
	    map<ll , ll>m1;
	    map<ll , ll>m2;
	    map<ll , ll>m3;
	    set<ll>s;
	    for(ll i = 0; i < n1 ; i++)
	    {
	        cin >> v[i];
	        m1[v[i]]++;
	        s.insert(v[i]);
	    }
	    for(ll i = 0; i < n2 ; i++)
	    {
	        cin >> w[i];
	        m2[w[i]]++;
	        s.insert(w[i]);
	    }
	    for(ll i = 0; i < n3 ; i++)
	    {
	        cin >> x[i];
	        m3[x[i]]++;
	        s.insert(x[i]);
	    }
	    set<ll> :: iterator itr;
	    bool ans = 0;
	    for (itr = s.begin(); itr != s.end(); ++itr) 
        { 
         if(m1[*itr] > 0 && m2[*itr] > 0 && m3[*itr] > 0)
         {
             cout << *itr << " ";
             ans = 1;
         }
        } 
        if(!ans)
        {
            cout << -1 << endl;
        }
        cout << endl;
	}
	return 0;
}
