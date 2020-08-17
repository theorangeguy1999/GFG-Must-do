  
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

int X[] = {-1,0,1,0};
int Y[] = {0,1,0,-1};

class Graph
{
private:
  int v;
  un_map<int,list<int>> adj;

public:
  Graph()
  {
    v = 31; 
  }

  void addedge(int x , int y)
  {
    adj[x].pb(y);
  }

  void printgraph()
  {
    for(int i = 1 ; i<=30; i++)
    {
      cout<<i<<" : ";
      for(int nbr : adj[i])
        cout<<nbr<<" , ";
      cout<<endl;
    }
  }

  void sal()
  {
    un_map<int,int> moves;
    bool visited[50] = {0};

    moves[1] = 0;
    queue<int> q;
    q.push(1);

    while(!q.empty())
    {
      int node = q.front();
      q.pop();
      for(int nbr : adj[node])
      {

        if(visited[nbr] == false)
        {
          visited[nbr] = true;
          q.push(nbr);
          moves[nbr] = moves[node] + 1;
        }
      }
    }

    cout<<moves[30]<<endl;
  }

};

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;

  while(t--)
  {
    vector<int> board(50,0);
    int n;
    cin>>n;
    for(int i = 0 ; i<n ; i++)
    {
      int x,y;
      cin>>x>>y;
      board[x] = y-x;
    }

    Graph g;

    for(int i = 1 ; i<= 30 ; i++)
    {
      for(int j = 1 ; j<=6 ; j++)
      {
        if(i+j+board[i+j] <= 30)
          g.addedge(i,i+j+board[i+j]);
      }
    }

    //g.printgraph();

    g.sal();



  }
  return 0;

}
