bool comp(const val &A,const val &B)
{
    return A.first<B.first;
}
int maxChainLen(struct val p[],int n)
{
    sort(p,p+n,comp);
    int dp[n];
    int ans = 0;
    for(int i = 0 ; i<n ; i++)
    {
        int prev = 0;
        val tocheck = p[i];
        for(int j = i-1 ; j>=0 ; j--)
        {
            if(p[j].second < tocheck.first)
                prev = max(dp[j],prev);
        }
        
        dp[i] = prev + 1;
        ans = max(ans,dp[i]);
    }
    
    return ans;
}
