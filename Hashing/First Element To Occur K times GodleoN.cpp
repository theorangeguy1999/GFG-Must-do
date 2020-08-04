#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t ;
	while(t--)
	{
	    int n , k ;
	    cin >> n >> k ;
	    vector<int>v(n);
	    map<int,int>m;
	    for(int i = 0 ; i < n ;i++)
	    {
	        cin >> v[i];
	        m[v[i]]++;
	    }
	    int ans = 0;
	    for(int i =0 ; i < n ; i++)
	    {
	        if(m[v[i]] == k)
	        {
	            cout << v[i] << endl;
	            ans = 1;
	            break;
	        }
	    }
	    if(!ans)
	    {
	        cout << -1 << endl;
	    }
	}
	return 0;
}
