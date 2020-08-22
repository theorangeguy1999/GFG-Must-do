  
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

int board[10][10];
int n;
set<vector<int>> ans;

bool cqbp(int i,int j)
{
  for(int y = i-1 ; y>=0 ; y--)
    if(board[y][j] == 1)
      return false;

  for(int k = 1 ; i-k >=0 && j-k >= 0 ; k++)
    if(board[i-k][j-k] == 1)
      return false;

  for(int k = 1 ; i-k >=0 && j+k <n ; k++)
    if(board[i-k][j+k] == 1)
      return false;

  
    return true;
}

void placeQueen(int ql,int row,vector<int> &tp)
{
  if(ql == 0)
  {
    ans.insert(tp);
    return;
  }


  for(int col = 0 ; col <n ; col++)
  {
    if(cqbp(row,col))
    {
      tp[col] = row+1;
      board[row][col] = 1;
      placeQueen(ql-1,row+1,tp);
      board[row][col] = 0;
      tp[col] = 0;
    }
  }

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
    ans.clear();
    memset(board,0,sizeof(board));
    cin>>n;
    vector<int> tp(n,0);
    placeQueen(n,0,tp);

    if(ans.size() == 0)
    {
      cout<<-1<<endl;
      continue;
    }
    for(vector<int> v : ans)
    {
      cout<<"[";
      for(int x : v)
        cout<<x<<" ";
      cout<<"] ";
    }

    cout<<endl;

  }
  return 0;

}
