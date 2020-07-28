#include <bits/stdc++.h>
using namespace std;
int dp[100][100001];
int solve(int st,int sum,int n,int *arr)
{
    if(sum<0)
    {
        return 0;
    }
    if(sum==0)
    return 1;
    if(st==n)
    return 0;
    if(dp[st][sum]==-1)
    {
        dp[st][sum]=solve(st+1,sum,n,arr) or solve(st+1,sum-arr[st],n,arr);
    }
    return dp[st][sum];
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        sum+=arr[i];
	    }
        if(sum&1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            sum/=2;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<=sum;j++)
                    dp[i][j]=-1;
            }
            int ans=solve(0,sum,n,arr);
            if(ans)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
