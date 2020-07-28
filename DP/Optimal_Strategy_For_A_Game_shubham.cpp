#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int arr[1000];
int n;
int solve(int st,int en)
{
    if(st>en)
    return 0;
    if(dp[st][en]==-1)
    {
        dp[st][en]=max(arr[st]+min(solve(st+1,en-1),solve(st+2,en)),arr[en]+min(solve(st+1,en-1),solve(st,en-2)));
    }
    return dp[st][en];
}
int main() {
	int t;
	cin>>t;
	while(t--)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n;
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<solve(0,n-1)<<endl;
    }
	return 0;
}
