int maxLen(int A[], int n)
{
    int sum[n+1];
    sum[0] = 0;
    unordered_map<int,int> mp;
    
    int ans = 0;
    for(int i = 1 ; i<=n ; i++)
    {
        sum[i] = sum[i-1] + A[i-1];
        
        if(sum[i] == 0)
        {
            ans = max(ans,i);
        }
        else
        {
            if(mp.count(sum[i]) == 0)
                mp[sum[i]] = i;
            else
            {
                ans = max(ans,i - mp[sum[i]]);
            }
        }
    }
    

    return ans;
    
}
