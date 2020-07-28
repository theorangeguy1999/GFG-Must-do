#include <bits/stdc++.h>
using namespace std;
int dp[100][100];
string s,p;
int solve(int st1,int st2)
{
    if(st1==s.size() or st2==p.size())
    {
        return s.size()-st1 + p.size()-st2;
    }
    if(dp[st1][st2]==-1)
    {
        if(s[st1]==p[st2])
        {
            dp[st1][st2]=1+solve(st1+1,st2+1);
        }
        else
        {
            dp[st1][st2]=1+min(solve(st1+1,st2),solve(st1,st2+1));
        }
    }
    return dp[st1][st2];
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    memset(dp,-1,sizeof(dp));
	    cin>>s;
	    cin>>p;
	    cout<<solve(0,0)<<endl;
	}
	return 0;
}
