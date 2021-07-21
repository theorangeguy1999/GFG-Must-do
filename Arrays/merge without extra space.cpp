class Solution{
    public:
        //Function to merge the arrays.
        int new_gap(int gap)
        {
            if ( gap == 1)
                return 0;
            else
                return (gap/2) + gap%2;
        }
        
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int gap = new_gap(n+m);
    
            while(gap>0)
            {
                int i;
                for(i = 0 ; i+gap<n ; i++)
                    if (arr1[i] > arr1[i+gap])
                        swap(arr1[i],arr1[i+gap]);
                
                for(; i<n && (gap - (n-i)) < m ; i++)
                    if(arr1[i] > arr2[gap - (n-i)])
                        swap(arr1[i],arr2[gap - (n-i)]);
                
                for(int j = 0 ; j + gap<m ; j++)
                    if(arr2[j] > arr2[j+gap])
                        swap(arr2[j],arr2[j+gap]);
                
                gap = new_gap(gap);
            }
        } 
};
