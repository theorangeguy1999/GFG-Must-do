#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t ; while(t--)
	{
	    int n;
	    cin >> n ;
	    int k ; 
	    cin >>  k ;
	    int ans = n/(k+1) ;
	    if(n % (k+1) != 0)
	    {
	        ans++;
	    }
	    vector<int>v(n);
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> v[i];
	    }
	    sort(v.begin() , v.end());
	    int minimum = 0 ;
	    for(int i = 0 ;i < ans ; i++)
	    {
	        minimum += v[i];
	    }
	    int maximum = 0 ; 
	    for(int i = n-1 ; i >= n - ans ; i--)
	    {
	        maximum += v[i];
	    }
	    cout << minimum << " " << maximum << endl;
	}
	return 0;
}