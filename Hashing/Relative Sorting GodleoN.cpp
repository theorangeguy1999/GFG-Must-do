#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t ;while(t--)
	{
	    int n , m ;
	    cin >> n >> m ;
	    unordered_map<int,int>m1;
	    vector<int>v(n);
	    for(int i = 0; i < n ; i++)
	    {
	        cin >> v[i];
	        m1[v[i]]++;
	    }
	    vector<int>w(n);
	    for(int i = 0; i < m ; i++)
	    {
	        cin >> w[i];
	    }
	    sort(v.begin() , v.end());
	    unordered_map<int,int> over;
	    for(int i = 0 ; i < m ; i++)
	    {
	        while(m1[w[i]] != 0)
	        {
	            cout << w[i] << " ";
	            m1[w[i]]--;
	        }
	        over[w[i]] = 1;
	    }
	    for(int i = 0 ;i < n ; i++)
	    {
	        if(over[v[i]] != 1)
	        {
	            cout << v[i] << " "; 
	        }
	    }
	    cout << endl;
	}
	return 0;
}
