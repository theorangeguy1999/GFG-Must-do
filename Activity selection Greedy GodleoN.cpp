#include <bits/stdc++.h>
using namespace std;


//same as n meetings in one room
class activity{
    public :
  int start;
  int end;
};

bool comparator(activity a , activity b)
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
	     activity meet[n];
	     for(int i = 0 ;i < n ; i++)
	     {
	         meet[i].start = s[i];
	         meet[i].end = f[i];
	     }
	     sort(meet , meet+n , comparator);
	     vector<int>v;
	     v.push_back(meet[0].start);
	     int last = meet[0].end;
	     for(int i = 1 ; i  < n ; i++)
	     {
	         if(meet[i].start >= last)
	         {
	             v.push_back(meet[i].start);
	             last = meet[i].end;
	         }
	         else
	         {
	             continue;
	         }
	     }
         cout << v.size() << endl;
	 }
	return 0;
}