#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t ;
	while(t--)
	{
	    int m , n ; 
	    cin >> m >> n ;
	    string s1 , s2 ;
	    cin >> s1 >> s2 ;
	    int dp[m+1][n+1];
	    int ans = 0 ;
	    memset(dp , 0 , sizeof(dp));
	    for(int i = 1; i <= m ; i++)
	    {
	        for(int j = 1 ; j <= n ; j++)
	        {
	           if(i == 0 || j == 0)
	           {
	               dp[i][j] = 0;
	           }
	           if(s1[i-1] == s2[j-1])
	           {
	               dp[i][j] = dp[i-1][j-1] + 1 ;
	           }
	           else
	           {
	               dp[i][j] = 0 ;
	           }
	           ans = max(ans , dp[i][j]);
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}
