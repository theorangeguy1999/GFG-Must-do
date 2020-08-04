#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    string t;
	    unordered_map<char,int>m1;
	    cin >> s >> t;
	    int minimum = INT_MAX;
	    for(int i = 0; i < s.size() ; i++)
	    {
	        if(m1[s[i]] == 0)
	        {
	            m1[s[i]] = i+1;
	        }
	    }
	    char ans = '$';
	    for(int i = 0 ; i < t.size() ; i++)
	    {
	     if(m1[t[i]] < minimum && m1[t[i]] != 0)
	     {
	         minimum = m1[t[i]];
	         ans = t[i];
	     }
	    }
	    cout << ans << endl;
	}
	return 0;
}
