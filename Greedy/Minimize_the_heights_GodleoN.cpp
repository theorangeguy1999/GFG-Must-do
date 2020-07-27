#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t ;
	cin >> t ;
	while(t--)
	{
	    int k;
	    cin >> k ;
	    int n ; 
	    cin >> n ;
	    vector<int>v(n);
	    int sum = 0 ;
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> v[i];
	    }
	    int ans= INT_MAX;
	    sort(v.begin() , v.end());
	    for(int i = 0 ; i < n ; i++)
	    {
	        int maximum = INT_MIN , minimum = INT_MAX;
	        for(int j = 0 ; j < i ; j++)
	        {
	           maximum = max(maximum , v[j] + k);
	           minimum = min(minimum , v[j] + k);
	        }
	        for(int j = i ; j < n ; j++)
	        {
	            maximum = max(maximum , v[j] - k);
	            minimum = min(minimum , v[j] - k);
	        }
	        ans = min(ans , maximum - minimum);
	    }
	    cout << ans << endl;
	}
	return 0;
}