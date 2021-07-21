long long countPairs(int X[], int Y[], int M, int N)
    {
       //Your code here
        sort(Y,Y+N);
        int ny[5] = {0};
        for(int i = 0 ; i<N ; i++)
            if (Y[i] < 5)
               ny[Y[i]]++;
        
        long long int ans = 0;
               
        for(int i = 0 ; i<M ; i++)
        {
            int x = X[i];
            if(x == 0)
                continue;
            
            if(x == 1)
            {
                ans = ans + ny[0];
                continue;
            }
            
            auto it = upper_bound(Y,Y+N,x);
            int temp = (Y+N)-it;
            
            temp = temp + ny[0] + ny[1];
            
            if(x == 2)
                temp = temp - ny[3] - ny[4];
            
            
            if(x == 3)
                temp = temp + ny[2];
            
            ans = ans + temp;
        }
        
        return ans;
    }
