#include <iostream>
using namespace std;

int main() {
	//code
	int t;cin >> t ; while(t--)
	{
	    int n , m ; 
	    cin >> n >> m ;
	    int arr[n][m];
	    arr[0][0] = 0;
	    for(int i=1 ; i < m ; i++)
	    {
	        arr[0][i] = 1;
	    }
	    for(int i = 1 ; i < n ; i++)
	    {
	        arr[i][0] = 1;
	    }
	    for(int i = 1 ; i < n ; i++)
	    {
	        for(int j = 1 ; j < m ; j++)
	        {
	            arr[i][j] = arr[i-1][j] + arr[i][j-1];
	        }
	    }
	    cout << arr[n-1][m-1] << endl;
	}
	return 0;
}
