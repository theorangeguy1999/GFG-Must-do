  
#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define ff first
#define ss second
#define pb push_back
#define INF 1000000000
#define MOD 1000000007
#define int long long
#define un_map unordered_map
#define un_set unordered_set

using namespace std;

int X[] = {-1,-1,0,1,1,1,0,-1};
int Y[] = {0,1,1,1,0,-1,-1,-1};

int n,m;
char mat[10][10];
bool vis[10][10];
un_set<string> dict;
set<string> ans;

void func(int i, int j,string &cur_string,int max_length)
{
  if(vis[i][j] == true)
    return;

  if(cur_string.length() > max_length)
    return;

  vis[i][j] = true;

  cur_string = cur_string + mat[i][j];
  if(dict.find(cur_string) != dict.end())
    ans.insert(cur_string);

  for(int k = 0 ; k<8 ; k++)
  {
    if(i + X[k] >= 0 && i + X[k] <n && j + Y[k] >=0 && j + Y[k] <m)
      func(i+X[k],j+Y[k],cur_string,max_length);
  }

  cur_string = cur_string.substr(0,cur_string.length()-1);
  vis[i][j] = false;
  return;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;

  while(t--)
  {
    cin>>n;
    dict.clear();
    int max_length = INT_MIN; 
    for(int i = 0 ; i<n ; i++)
    {
      string temp;
      cin>>temp;
      int len = temp.length();
      max_length = max(max_length,len);
      dict.insert(temp);
    }
    cin>>n>>m;
    for(int i = 0 ; i<n ; i++)
      for(int j = 0 ; j<m ; j++)
        cin>>mat[i][j];

    ans.clear();

    for(int i = 0 ; i<n ; i++)
    {
      for(int j = 0 ; j<m ; j++)
      {
        memset(vis,0,sizeof(vis));
        string temp = "";
        func(i,j,temp,max_length);
      }
    }
    if(ans.size() == 0)
      cout<<-1;
    else
      for(string str:ans)
        cout<<str<<" ";

    cout<<endl;

  }
  return 0;

}
