//Given two strings X and Y. The task is to find the length of the longest common substring.
//O(n*m) sol using memorization
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(string a,string b,int n,int m)
{
    int dp[n+1][m+1];
    int mx=0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 or j==0)
            dp[i][j]=0;
            else if(a[i-1]==b[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
                mx=max(mx,dp[i][j]);
            }
            else
            {
                dp[i][j]=0;
            }
            
        }
    }
    return mx;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string a,b;
        int n,m;
        cin>>n>>m;
        cin>>a>>b;
        cout<<solve(a,b,n,m)<<"\n";;
    }
    
}
