//Given an integer array and a non-negative integer k, count all distinct pairs with difference equal to k, i.e., A[ i ] - A[ j ] = k.
//This has O(n) time but not O(1) space as it uses hashmap
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       vector<int> v;
        unordered_map<int,int> mp; //freq map for all numbers
       for(int i=0;i<n;i++)
       {
           int x;
           cin>>x;
           v.push_back(x);
           mp[x]++;
       }
       int k;
       cin>>k;
      int cnt=0;
       map<pair<int,int>,int> pr; //ordered map--> can be converted to hashmap with custom comparator for O(n) time
       for(int i=0;i<n;i++)
       {
           int a;
           a=v[i];
           mp[a]--;
           if(mp[abs(a-k)]>0)
           {
               if(pr[make_pair(a,abs(a-k))]==1 or pr[make_pair(abs(a-k),a)]==1)
               {
                   continue;
               }
               pr[make_pair(a,abs(a-k))]=1;
               pr[make_pair(abs(a-k),a)]=1;
               cnt++;
           }
           mp[a]++;
       }
       cout<<cnt<<endl;


    }
    
}
