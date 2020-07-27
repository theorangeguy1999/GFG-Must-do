#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t ;
	while(t--)
	{
	    int n , k ;
	    cin >> n >> k ;
	    if(k == 0 && n > 1)
	    {
	        cout << -1 << endl;
	        continue;
	    }
	    if(k > n*9)
	    {
	        cout << -1 << endl;
	        continue;
	    }
	    if(k < 9)
	    {
	        cout << k ;
            n--;
            while(n--)
            {
                cout << 0 ;
            }
	    }
	    else
	    {
	        while(k >= 9)
	        {
	            cout << 9 ;
	            k = k - 9;
	            n--;
	        }
	        cout << k ;
	        n--;
	        while(n--)
	        {
	            cout << 0 ;
	        }
	    }
	    cout << endl;
	}
	return 0;
}