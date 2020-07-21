#include <bits/stdc++.h>
using namespace std;
int main() {
 //trailing zeroes in factorial of a no.

 int n;
 cin >> n ;
 int ans = 0;
 if(n <= 4)
 {
     cout << 0 << endl;
 }
 else
 {
 for(int i = 5 ; n/i > 0 ; i*= 5)
 {
   ans += (n/i);
 }
 cout << ans << endl;
 }
}
