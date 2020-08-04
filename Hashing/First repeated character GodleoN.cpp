#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int  t;
	cin >> t ; 
	while(t--)
	{
	    string s;
	    cin >> s ;
	    unordered_map<char,int>m1;
	    char ans = 123;
	    for(int i = 0; i < s.size() ; i++)
	    {
	        m1[s[i]]++;
	        if(m1[s[i]] == 2)
	        {
	            ans = s[i];
	            break;
	        }
	    }
	    if(ans == 123)
	    {
	        cout << -1 << endl;
	    }
	    else
	    {
	        cout << ans << endl;
	    }
	}
	return 0;
}
