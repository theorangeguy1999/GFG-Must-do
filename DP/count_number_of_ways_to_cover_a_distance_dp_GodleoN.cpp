#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t ; cin >> t ; while(t--)
	{
	int n;
	cin >> n ;
    if(n <= 2)
    {
        cout << n << endl;
        continue;
    }
    if(n == 3)
    {
        cout << 4 << endl;
        continue;
    }
    else
    {
    int dp[n+1] = {0};
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i = 4 ; i <= n ; i++)
    {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    cout << dp[n] << endl;
    continue;
    }
}
}