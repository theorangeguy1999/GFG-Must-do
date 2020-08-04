#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	//code
	int t;
	cin >> t ;
	while(t--)
	{
	    int n ;
	    cin >> n ;
	    unordered_map<ll,ll> m1;
	    unordered_map<ll,ll> m2;
	    vector<ll>v(n);
	    vector<ll>w(n);
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> v[i];
	        m1[v[i]]++;
	    }
	    for(int  i = 0 ; i < n ; i++)
	    {
	        cin >> w[i];
	        m2[w[i]]++;
	    }
	    bool ans = 1;
	    for(int i = 0; i < n ; i++)
	    {
	        if(m1[v[i]] != m2[v[i]])
	        {
	        ans = 0 ;
	        break;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}
