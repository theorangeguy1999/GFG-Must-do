bool compare(struct val p1,struct val p2)
{
    if(p1.second< p2.second)
    return true;
    return false;
}
int maxChainLen(struct val p[],int n)
{
    int ans=0;
    sort(p,p+n,compare);
    for(int i=0;i<n;i++)
    {
        int maxi=p[i].second;
        int temp=1;
        for(int j=i+1;j<n;j++)
        {
            if(p[j].first>maxi)
            {
                maxi=p[j].second;
                temp+=1;
            }
        }
        ans=max(ans,temp);
    }
    return ans;
}
