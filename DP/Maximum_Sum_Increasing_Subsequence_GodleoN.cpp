#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t; cin >> t ; while(t--)
	{
	     int n;
 cin >> n ;
 vector<int>v(n);
 for(int i = 0 ; i< n ; i++)
 {
     cin >> v[i];
 }
 int dp[n] = {0};
 dp[0] = v[0];
 for(int i = 1 ; i < n; i++)
 {
     dp[i] = v[i];
     int maximum = 0;
     for(int j = 0 ; j < i ; j++)
     {
         if(v[j] < v[i])
         {
             int possibleans = dp[j];
             maximum = max(possibleans , maximum);
         }
     }
     dp[i] += maximum;
 }
 int ans = INT_MIN;
 for(int i = 0 ; i < n ; i++)
 {
   ans = max(ans , dp[i]);
 }
 cout << ans << endl;
	}
	return 0;
}
