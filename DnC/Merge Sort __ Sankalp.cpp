void merge(int arr[], int l, int m, int r)
{
     // Your code her
    int temp[r - l + 1];
    int i = l, j = m+1, k = 0;
    
    while(i <=m && j <=r)
    {
        if(arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i <=m)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j<=r)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }
    
    for(int i = 0 ; i<r-l+1; i++)
    {
        arr[i+l] = temp[i];
    }
    
    return;
}
