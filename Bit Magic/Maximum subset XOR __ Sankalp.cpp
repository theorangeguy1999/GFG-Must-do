int maxSubarrayXOR(int A[], int n)
{
    //Your code here
    int index = 0;
    
    for(int i = 31 ; i>=0 ; i--)
    {
        int maxInd = index;
        int maxele = INT_MIN;
        
        for(int j = index ; j<n ; j++)
        {
            if((A[j] & (1<<i)) != 0 && A[j] > maxele)
            {
                maxInd = j;
                maxele = A[j];
            }
        }
        
        if(maxele != INT_MIN)
        {
            swap(A[index],A[maxInd]);
            for(int j = 0 ; j<n ; j++)
            {
                if(j != index && (A[j] & (1<<i)) != 0)
                {
                    A[j] = A[j]^A[index];
                }
            }
            index++;
        }
    }
    
    int res = 0;
    
    for(int i = 0 ; i<n ; i++)
    {
       // cout<<A[i]<<" ";
        res = res ^ A[i];
    }
        //cout<<A[i]<<" ";
    
    return res;
}
