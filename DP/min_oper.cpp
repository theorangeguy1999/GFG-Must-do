#include <iostream>
#include<climits>
using namespace std;

int operation(int i, int n, int* dp)
{
    if(n==i)
    {
        return 1;
    }

    if(i>n)
    {
        return INT_MAX;
    }

    if(dp[i] >0)
    {

        return dp[i];
    }


    int a = operation(i+1, n, dp);
    int b = operation(i*2, n, dp);

    dp[i] = min(a, b) + 1;

    return min(a, b) + 1;

}


int main() {

	int t;
	cin>>t;

	while(t--)
	{
	    int n;
	    cin>>n;

	    int* dp = new int[n+1];

	    for(int i=0;i<n;i++)
        {

            dp[i] = 0;
        }

	    int ans = operation(1, n, dp);

	    cout<<ans<<endl;
	}


	return 0;
}
