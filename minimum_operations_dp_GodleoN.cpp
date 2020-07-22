#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t ; cin >> t ; while(t--)
	{
	int n;
	cin >> n ;
	if(n <= 3)
	{
	    cout << n << endl;
	    continue;
	}
	else
	{
	    int dp[n+1] = {0};
	    dp[0] = 0 ;
	    dp[1] = 1 ;
	    dp[2] = 2 ;
	    dp[3] = 3 ;
	    for(int i = 4 ; i < n+1 ; i++)
	    {
	       int k = 1 + dp[i-1];
	       int j = INT_MAX;
	       if(i % 2 == 0)
	       {
	           j = 1 + dp[i/2];
	       }
	       dp[i] = min(k,j);
	    }
        cout << dp[n] << endl;
	    continue;
	}
	}
	return 0;
}