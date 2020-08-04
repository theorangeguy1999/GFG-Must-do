vector <int> countDistinct (int A[], int n, int k)
{
    vector<int> ans;
    
    unordered_map<int,int> mp;
    
    for(int i = 0 ; i<k ; i++)
    {
        mp[A[i]]++;
    }
    
    for(int i = k ; i<n ; i++)
    {
        ans.push_back(mp.size());
        
        mp[A[i-k]]--;
        if(mp[A[i-k]] == 0)
            mp.erase(A[i-k]);
        
        mp[A[i]]++;
    }
    
    ans.push_back(mp.size());
    
    return ans;
}
