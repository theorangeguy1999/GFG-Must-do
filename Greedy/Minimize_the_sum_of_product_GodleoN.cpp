#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t ; 
	while(t--)
	{
	    int n;
	    cin >> n ;
	    vector<int>v(n);
	    vector<int>w(n);
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> v[i];
	    }
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> w[i];
	    }
	    sort(v.begin() , v.end());
	    sort(w.begin() , w.end() , greater<int>());
	    long long int sum = 0 ;
	    for(int i = 0 ; i< n ; i++)
	    {
	        sum += (v[i] * w[i]);
	    }
	    cout << sum << endl;
	}
	return 0;
}