//Given an input stream of N characters consisting only of lower case alphabets. The task is to find the first non repeating character, each time a character is inserted to the stream.
//If no non repeating element is found print -1.
//O(n) soln
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
      queue<char> nonrep;
      unordered_map<char,int> mp; //U can also make int map[26] which is more faster
      vector<char> ans(n);
      for(int i=0;i<n;i++)
      {
          char ch;
          cin>>ch;
          if(mp[ch]==0)
          {
              nonrep.push(ch);
              ans[i]=nonrep.front();
              mp[ch]++;
          }
          else
          {     
              mp[ch]++;        
              while (!nonrep.empty() and mp[nonrep.front()]>=2)
              {
                  nonrep.pop();
              }
              if(nonrep.empty())
              ans[i]='1';
              else
              ans[i]=nonrep.front();
          }
          
      }
      for(int i=0;i<n;i++)
      {
          if(ans[i]=='1')
          cout<<-1<<" ";
          else
          cout<<ans[i]<<" ";
      }
      cout<<endl;


       
       

    }
    
}
