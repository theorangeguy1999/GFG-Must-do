  
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

int mat[9][9];

bool valid(int i , int j, int num)
{
  for(int k = 0 ; k <9 ; k++)
    if(mat[i][k] == num)
      return false;
  for(int k = 0 ; k <9 ; k++)
    if(mat[k][j] == num)
      return false;

  int x = i/3;
  int y = j/3;

  for(int p = 0 ; p<3 ; p++)
    for(int q = 0; q<3 ; q++)
      if(mat[x*3+p][y*3+q] == num)
        return false;

  return true;

}

void sudoku(int i,int j)
{
  //cout<<i<<" "<<j<<endl;
  if(i == 9)
  {
    for(int x = 0 ; x<9 ; x++)
      for(int y = 0 ; y<9 ; y++)
        cout<<mat[x][y]<<" ";

    return;
  }

  if(mat[i][j] != 0)
  {
    if(j == 8)
      sudoku(i+1,0);
    else
      sudoku(i,j+1);

    return;
  }

  mat[i][j] = 0;
  for(int k = 1 ; k<=9 ; k++)
  {
    //cout<<"HI"<<k<<" ";
    //cout<<i<<" "<<j<<" "<<k<<endl;
    if(valid(i,j,k))
    {
      mat[i][j] = k;
      if(j == 8)
        sudoku(i+1,0);
      else
        sudoku(i,j+1);
    }
  }
  mat[i][j] = 0;

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
    for(int i = 0 ; i<9 ; i++)
      for(int j = 0 ; j<9 ; j++)
        cin>>mat[i][j];

    sudoku(0,0);

    /*for(int i = 0 ; i<9 ; i++)
    {
      for(int j = 0 ; j<9 ; j++)
        cout<<mat[i][j]<<" ";
      cout<<endl;
    }*/

    cout<<endl;
  }


  return 0;

}
