#include<bits/stdc++.h>
int maxLen(int A[], int n)
{
    // Your code here
    int sum[n] = {0};
    sum[0] = A[0];
    for(int i = 1; i < n ; i++)
    {
        sum[i] = sum[i-1] + A[i];
    }
    unordered_map<int,int>m;
    int maximum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(sum[i] == 0)
        {
            maximum = max(maximum , i+1);
        }
        if(m[sum[i]] == 0)
        {
            m[sum[i]] = i+1;
        }
        else
        {
            maximum = max(maximum , i+1 - m[sum[i]]);
        }
    }
    int ans = 0;
    for(int i = 0; i < n ; i++)
    {
        ans += A[i];
    }
    if(ans == 0)
    {
        return n;
    }
    return maximum;
}
