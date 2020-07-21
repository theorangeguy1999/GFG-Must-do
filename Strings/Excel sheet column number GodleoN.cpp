#include <bits/stdc++.h>
using namespace std;
int main() {
 //excel sheet column number leetcode
 string s;
 cin >> s ;
 long long k = 1 ;
 long long count = 0 ;
 for(int i = s.size() -1  ; i >= 0 ; i--)
 {
    count += ((s[i] - 64) * k);
    k*= 26;
 }
 cout << count << endl;
}
