#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t ; cin >> t ; while(t--)
	{
	    int m , n ;
	    cin >> m >> n ;
	    string s1 , s2 ; 
	    cin >> s1 >> s2 ;
	    int dp[m+1][n+1];
	    for(int i = 0 ; i <= m ; i++)
	    {
	        for(int j = 0 ; j <= n ; j++)
	        {
	            if(i == 0 || j == 0)
	            {
	                dp[i][j] = 0 ;
	            }
	            else if(s1[m-i] == s2[n-j])
	            {
	                dp[i][j] = dp[i-1][j-1] + 1;
	            }
	            else
	            {
	                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
	            }
	        }
	    }
	    cout << dp[m][n] << endl;
	}
	return 0;
}