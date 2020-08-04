#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t ;
	while(t--)
	{
	    int n , m , x;
	    cin >> n >> m >> x;
	    vector<int>v(n);
	    vector<int>w(m);
	    unordered_map<int,int>m1;
	    unordered_map<int,int>m2;
	    for(int i = 0 ; i < n ;i++)
	    {
	        cin >> v[i];
	        m1[v[i]]++;
	    }
	    for(int i = 0 ; i< m ; i++)
	    {
	        cin >> w[i];
	        m2[w[i]]++;
	    }
	    sort(v.begin() , v.end());
	    sort(w.begin() , w.end());
	    int count = 0;
	    for(int i = 0 ; i < n ; i++)
	    {
	        if(m1[v[i]] == 1 && m2[x - v[i]] == 1)
	        {
	            count++;
	        }
	    }
	    int k =count;
	    for(int i = 0 ; i < n ; i++)
	    {
	        if(m1[v[i]] == 1 && m2[x - v[i]] == 1)
	        {
	            if(count != k)
	            {
	                cout << " ";
	            }
	            cout << v[i] << " " << x-v[i] ;
	        if(count != 1)
	        {
	            cout << "," ;
	            count--;
	            continue;
	        }
	        }
	    }
	    if(k == 0)
	    {
	        cout << -1 ;
	    }
	    cout << endl;
	}
	return 0;
}
