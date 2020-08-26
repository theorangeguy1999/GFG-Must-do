  
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
  int v;
  list<char> adj[26];
  int in[26];

public:
  Graph()
  {
    this->v = 26;
    for(int i = 0 ; i<26 ; i++)
      in[i] = 0;
  }

  ~Graph()
  {}

  void add_edge(char x, char y)
  {
    adj[x - 'a'].push_back(y);
    in[y-'a']++;
  }

  void printgraph()
  {
    for(int i = 0 ; i<26 ; i++)
    {
      char ch = char(i + 'a');
      if(adj[i].size() > 0)
      {
        cout<<ch<<" : ";
        for(char nbr : adj[i])
          cout<<nbr<<" -> ";
        cout<<endl;
      }
    }
  }

  bool Euleur_cycle_present();
  bool check_in_degree();
  bool is_strongly_connected();
  void DFS(int vertex,bool visited[]);
  Graph transpose();
};

bool Graph::check_in_degree()
{
  for(int i = 0 ; i<26 ; i++)
  {
    if(in[i] != adj[i].size())
      return false;
  }
  return true;
}

void Graph::DFS(int vertex,bool visited[])
{
  visited[vertex] = true;
  for(char ch : adj[vertex])
  {
    if(visited[ch - 'a'] == false)
      DFS(ch - 'a',visited);
  }
}

Graph Graph::transpose()
{
  Graph t;
  for(int i = 0 ; i<26 ; i++)
  {
    for(int ch : adj[i])
    {
      t.add_edge(ch,char(i + 'a'));
    }
  }

  return t;
}

bool Graph::is_strongly_connected()
{
  bool visited[26] = {0};

  int n = 0;
  while(adj[n].size() == 0 && n<26)
    n++;

  DFS(n,visited);

  for(int i = 0 ; i<26 ; i++)
    if(adj[i].size() > 0 && visited[i] == false )
      return false;

  Graph T = transpose();

  memset(visited,0,sizeof(visited));

  T.DFS(n,visited);

  for(int i = 0 ; i<26 ; i++)
    if(adj[i].size() > 0 && visited[i] == false)
      return false;

  return true;
}

bool Graph::Euleur_cycle_present()
{
  if(!check_in_degree())
    return false;
  if(!is_strongly_connected())
    return false;

  return true;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;


  while(t--)
  {
    int n;
    cin>>n;
    string word;
    Graph g;
    for(int i = 0 ; i<n ; i++)
    {
      cin>>word;
      g.add_edge(word[0],word[word.length()-1]);
    }

    if(g.Euleur_cycle_present())
      cout<<1<<endl;
    else
      cout<<0<<endl;

  }


  return 0;

}
