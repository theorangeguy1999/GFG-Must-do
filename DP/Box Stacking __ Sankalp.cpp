struct box
{
    int l,b,h,area;
};

bool cust(const box &a, const box &b)
{
    return a.l*a.b > b.l*b.b;
}
int maxHeight(int height[],int width[],int length[],int n)
{
    vector<box> arr;
    
    for(int i = 0 ; i<n ; i++)
    {
        box temp;
        int h = height[i];
        int b = width[i];
        int l = length[i];
        
        if(l>b)
        {
            temp.l = l;
            temp.b = b;
            temp.h = h;
            arr.push_back(temp);
        }
        else
        {
            temp.l = b;
            temp.b = l;
            temp.h = h;
            arr.push_back(temp);
        }
        if(l>h)
        {
            temp.l = l;
            temp.b = h;
            temp.h = b;
            arr.push_back(temp);
        }
        else
        {
            temp.l = h;
            temp.b = l;
            temp.h = b;
            arr.push_back(temp);
        }
        if(h>b)
        {
            temp.l = h;
            temp.b = b;
            temp.h = l;
            arr.push_back(temp);
        }
        else
        {
            temp.l = b;
            temp.b = h;
            temp.h = l;
            arr.push_back(temp);
        }
    }
    sort(arr.begin(),arr.end(),cust);
    
    int dp[arr.size()];
    for(int i = 0 ; i<arr.size() ; i++)
    {
        dp[i] = arr[i].h;
        for(int j = i-1 ; j>=0 ; j--)
        {
            if(arr[j].l >arr[i].l && arr[j].b >arr[i].b)
            {
                //cout<<"HI";
                dp[i] = max(dp[i],dp[j] + arr[i].h);
            }
        }
    }
    
    int ans = INT_MIN;
    for(int i = 0 ; i<arr.size() ; i++)
    {
        //cout<<dp[i]<<" ";
        ans = max(ans,dp[i]);
    }
    //cout<<endl;
        
    return ans;

}
