#include <iostream>
using namespace std;
int n,m;
int solve(int x,int y)
{
    if(x==n-1  and y==m-1)
    return 1;
    if(x==n or y==m)
    return 0;
    return solve(x+1,y)+solve(x,y+1);
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    cout<<solve(0,0)<<endl;
	}
	return 0;
}
