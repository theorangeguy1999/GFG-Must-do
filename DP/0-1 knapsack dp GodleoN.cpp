#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t ; cin >> t ; while(t--)
     {
         int n;
         cin >> n;
         int maxW ;
        cin >> maxW;
        int value[n] = {0};
        int weight[n] = {0};
        for(int i = 0; i < n ; i++)
        {
            cin >> value[i];
        }
        for(int i = 0 ; i < n ; i++)
        {
            cin >> weight[i];
        }
        int dp[n+1][maxW+1]= {0};
        for(int i = 0 ; i <= n ; i++)
        {
           for(int j = 0 ; j <= maxW ; j++)
           {
               if(i == 0 || j == 0)
               {
                   dp[i][j] = 0;
               }
                else if(weight[i-1] <= j)
               {
                  dp[i][j] = max((dp[i-1][j - weight[i-1]] + value[i-1]) , dp[i-1][j]);
               }
               else
               {
                  dp[i][j] = dp[i-1][j];
               }
           }
        }
        cout << dp[n][maxW] << endl;
     }
}