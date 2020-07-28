#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
bool compare(string s1,string s2)
{
    if(s1+s2>s2+s1)
        return true;
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> inp;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            string ko="";
            while(temp)
            {
                int digi=temp%10;
                temp/=10;
                char c=char(digi+'0');
                ko=c+ko;
            }
            inp.push_back(ko);
        }
        sort(inp.begin(),inp.end(),compare);
        for(auto str:inp)
        cout<<str;
        cout<<endl;
    }
    return 0;
}
