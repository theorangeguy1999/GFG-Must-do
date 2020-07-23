#include <bits/stdc++.h>
using namespace std;
int main() {
 //find duplicate number if no.s in the array are all positive in the array
 int n;
 cin >> n ;
 vector<int>v(n);
 for(int i = 0 ; i < n ; i++)
 {
     cin >> v[i];
 }
 int ans = -1;
 for(int i = 0 ; i < n ; i++)
 {
     if(v[abs(v[i])] >= 0)
     {
         v[abs(v[i])] *= -1;
     }
     else
     {
         ans = v[i];
         break;
     }
 }
 cout << abs(ans) << endl;
}
