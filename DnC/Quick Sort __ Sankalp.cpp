int partition (int arr[], int low, int high)
{
   // Your code here
   int i = low-1;
   int j = low;
   int el = arr[high];
   
   for(j = low ; j<high ; j++)
   {
       if(arr[j] < el)
       {
           i++;
           swap(arr[i],arr[j]);
       }
   }
   i++;
   swap(arr[i],arr[high]);
   
   return i;
}
