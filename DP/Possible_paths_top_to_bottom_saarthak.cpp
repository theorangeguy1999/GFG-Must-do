//The task is to count all the possible paths from top left to bottom right of a mXn matrix with the constraints that from each cell you can either move only to right or down.
// O(n*m) time and space
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int n,m;
       cin>>n>>m;
       if(n==1 and m==1)
       {
       	cout<<1<<"\n";
       	continue;
	   }
       long long dp[100][100];
       for(int i=0;i<n;i++)
       {
           dp[i][0]=1;
       }
       for(int j=0;j<m;j++)
       {
           dp[0][j]=1;
       }
       dp[0][0]=0;
       for(int i=1;i<n;i++)
       {
           for(int j=1;j<m;j++)
           {
               dp[i][j]=(dp[i-1][j]%1000000007+dp[i][j-1]%1000000007)%1000000007;
           }
       }
       cout<<dp[n-1][m-1]<<"\n";

    }
    
}
