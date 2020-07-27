#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t ;
	while(t--)
	{
	    int n , money ;
	    cin >> n >> money;
	    vector<int>cost(n);
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> cost[i];
	    }
	    sort(cost.begin() , cost.end());
	    int count = 0 ;
	    for(int i = 0; i < n ; i++)
	    {
	        if(money >= cost[i])
	        {
	            count++;
	            money -= cost[i];
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}