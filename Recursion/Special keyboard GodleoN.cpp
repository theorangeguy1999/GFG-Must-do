#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int dp[76] = {0};
	for(int i = 0 ; i < 7 ; i++)
	{
	    dp[i] = i ;
	}
	for(int i = 7 ; i < 76; i++)
	{
	    int maximum = INT_MIN;
	    for(int j = 2 ; j <= i-3 ; j++)
	    {
	        int count = dp[j];
	        int x = i - 2 - j;
	        count += (x*count) ;
	        maximum = max(count , maximum);
	    }
	    dp[i] = maximum;
	}
	int t;
	cin >> t ; while(t--)
	{
	    int n;
	    cin >> n ;
	    cout << dp[n] << endl;
 	}
	return 0;
}
