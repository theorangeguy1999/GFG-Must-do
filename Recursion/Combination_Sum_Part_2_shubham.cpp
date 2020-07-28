#include <bits/stdc++.h>
using namespace std;
int n;
set<vector<int>> glo;
void solve(int st,int *arr,int temp,int sum,vector<int> ans)
{
    if(temp>sum)
    return;
    if(temp==sum)
    {
        glo.insert(ans);
        return ;
    }
    if(st==n)
    return;
    solve(st+1,arr,temp,sum,ans);
    ans.push_back(arr[st]);
    solve(st+1,arr,temp+arr[st],sum,ans);
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    glo.clear();
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int sum;
	    cin>>sum;
	    vector<int> ans;
	    solve(0,arr,0,sum,ans);
	    if(glo.size()==0)
	    {
	        cout<<"Empty";
	    }
	    else
	    for(auto vv:glo)
	    {
	        cout<<"(";
	        for(int i=0;i<vv.size();i++)
	        {
	            if(i)
	            {
	                cout<<" "<<vv[i];
	            }
	            else
	            cout<<vv[i];
	        }
	        cout<<")";
	    }
	    cout<<endl;
	}
	return 0;
}
