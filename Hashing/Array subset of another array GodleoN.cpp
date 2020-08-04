#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t ;
	while(t--)
	{
	    int n , m;
	    cin >> n >> m ;
	    vector<int>v(n);
	    vector<int>w(m);
	    unordered_map<int,int>m1 , m2 ;
	    for(int i = 0 ; i < n ; i++)
	    {
	    cin >> v[i]; 
	    m1[v[i]]++;
	    }
	    for(int i = 0 ; i < m ; i++)
	    {
	    cin >> w[i];
	    m2[w[i]]++;
	    }
	    bool ans = 1;
	    for(int i = 0; i < m ; i++)
	    {
	        if(m1[w[i]] < m2[w[i]])
	        {
	            ans = 0;
	            break;
	        }
	    }
	    if(ans)
	    {
	        cout << "Yes" << endl;
	    }
	    else
	    {
	        cout << "No" << endl;
	    }
	}
	return 0;
}
