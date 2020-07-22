#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t ; cin >> t ; while(t--)
	{
	    int n ;
	    cin >> n ;
	    vector<int>v(n);
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> v[i];
	    }
	    int low = 0 ; 
	    int mid = 0 ;
	    int high = n-1;
	    while(mid <= high)
	    {
	        switch(v[mid])
	        {
	            case 0:
	            swap(v[mid++] , v[low++]);
	            break;
	            
	            case 1:
	            mid++;
	            break;
	            
	            case 2:
	            swap(v[high--] , v[mid]);
	            break;
	        }
	    }
	    for(int i = 0; i < n ; i++)
	    {
	        cout << v[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}