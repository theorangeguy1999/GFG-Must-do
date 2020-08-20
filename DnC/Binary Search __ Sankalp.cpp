int bin_search(int arr[], int start, int end, int k)
{
    int pos;
    bool found = false;
    while(start <= end)
    {
      //cout<<"start: "<<start<<" End: "<<end<<endl;
      int mid = (start + end)/2;

      if(arr[mid] == k)
      {
        found = true;
        pos = mid;
      }
      if(k < arr[mid])
        end = mid -1;
      else
        start = mid + 1;
    }

    if(found)
      return pos;
    else
      return -1;

}
