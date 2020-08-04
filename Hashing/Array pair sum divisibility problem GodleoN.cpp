#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;cin >> t;while(t--)
	{
	    int n;
	    cin >> n ;
	    vector<int>v(n);
	    for(int i = 0;  i< n ; i++)
	    {
	        cin >> v[i];
	    }
	    int k ;
	    cin >> k ;
	    int arr[k] = {0};
	    for(int i = 0; i < n ; i++)
	    {
	        arr[v[i] % k]++;
	    }
	    bool ans = 1;
	    for(int i = 1; i < k ; i++)
	    {
	        if(arr[i] != arr[k-i])
	        {
	            ans = 0;
	            break;
	        }
	    }
	    if(ans)
	    {
	        if(arr[0] % 2 != 0)
	        {
	            ans = 0;
	        }
	    }
	    if(ans)
	    {
	        cout << "True" << endl;
	        continue;
	    }
	    else
	    {
	        cout << "False" << endl;
	        continue;
	    }
	}
	return 0;
}
