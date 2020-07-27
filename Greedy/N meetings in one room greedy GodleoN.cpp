#include <bits/stdc++.h>
using namespace std;

class meeting{
    public :
  int start;
  int end;
  int pos;
};

bool comparator(meeting a , meeting b)
{
    return a.end < b.end;
}

int main() {
	//code
	int t ;
	 cin >> t ; while(t--)
	 {
	     int n;
	     cin >> n ;
	     int s[n] ; int f[n];
	     for(int i = 0 ; i < n ; i++)
	     {
	         cin >> s[i] ;
	     }
	     for(int i = 0; i < n ; i++)
	     {
	         cin >> f[i];
	     }
	     meeting meet[n];
	     for(int i = 0 ;i < n ; i++)
	     {
	         meet[i].start = s[i];
	         meet[i].end = f[i];
	         meet[i].pos = i+1;
	     }
	     sort(meet , meet+n , comparator);
	     vector<int>v;
	     v.push_back(meet[0].pos);
	     int last = meet[0].end;
	     for(int i = 1 ; i  < n ; i++)
	     {
	         if(meet[i].start >= last)
	         {
	             v.push_back(meet[i].pos);
	             last = meet[i].end;
	         }
	         else
	         {
	             continue;
	         }
	     }
	     for(int i = 0 ; i < v.size() ; i++)
	     {
	         cout << v[i] << " ";
	     }
	     cout << endl;
	 }
	return 0;
}