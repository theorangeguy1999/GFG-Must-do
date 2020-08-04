#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t ; 
	while(t--)
	{
	    string s;
	    string t;
	    cin >> s>> t;
	    unordered_map<char,int>m1;
	    for(int i = 0; i < s.size() ; i++)
	    {
	        m1[s[i]]++;
	    }
	    for(int i = 0; i  <t.size() ; i++)
	    {
	        m1[t[i]]++;
	    }
	    string ans; 
	    for(int i = 0 ; i < s.size() ; i++)
	    {
	        if(m1[s[i]] == 1)
	        {
	            ans = ans + s[i];
	            continue;
	        }
	        size_t found = t.find(s[i]);
	        size_t found1 = ans.find(s[i]);
	        if(found == string::npos && found1 == string::npos)
	        {
	            ans = ans + s[i];
	        }
	    }
	    for(int i = 0 ; i < t.size() ; i++)
	    {
	        if(m1[t[i]] == 1)
	        {
	            ans = ans + t[i];
	            continue;
	        }
	        size_t found = s.find(t[i]);
	        size_t found1 = ans.find(t[i]);
	        if(found == string::npos && found1 == string::npos)
	        {
	            ans = ans + t[i];
	        }
	    }
	    if(ans.size() == 0)
	    {
	        cout  << -1 << endl;
	    }
	    else
	    {
	        sort(ans.begin(),ans.end());
	        cout << ans << endl;
	    }
	}
	return 0;
}
