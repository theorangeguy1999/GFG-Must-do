#include <iostream>
using namespace std;

int main() {
	//code
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    int pre[n];
	    pre[0]=a[0];
	    for(int i=1;i<n;i++){
	        pre[i]=pre[i-1]+a[i];
	    }
	    int idx=-1;
	    if(n==1) idx=1;
	    for(int i=1;i<n;i++){
	        if(pre[i]-a[i]==pre[n-1]-pre[i]){
	            idx=i+1;
	            break;
	        }
	    }
	    cout<<idx<<"\n";
	}
	return 0;
}