void heapify(int arr[], int n, int i) 
{
    int largest = i;
    int lc = 2*i + 1;
    int rc = 2*i + 2;
    
    if(lc<n && arr[largest] < arr[lc])
        largest = lc;
    
    if(rc<n && arr[largest] < arr[rc])
        largest = rc;
    
    if(largest != i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
    
    return;
}

// Rearranges input array so that it becomes a max heap
void buildHeap(int arr[], int n) 
{ 
    for(int i = n/2 - 1 ; i>=0 ; i--)
    {
        heapify(arr,n,i);
    }
}
