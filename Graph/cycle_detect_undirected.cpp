#include<bits/stdc++.h>
using namespace std;
# define int long long
class graph
{
  int V;
  list<int> *l;
public:
  graph(int v)
  {
    V=v;
    l=new list<int>[V];
  }
  void addEdge(int x,int y)
  {
  	l[x].push_back(y);
  	l[y].push_back(x);
  }
  bool dfs_helper(int s,bool *visited,int parent)
  {
     visited[s]=true;
     for(auto nbr:l[s])
     {
     	if(!visited[nbr])
     	{
     		bool check=dfs_helper(nbr,visited,s);
        if(check)
          return true;
        else 
          return false;
     	}
      else
      {
        if(nbr!=parent)
          return true;
      }
     }
     return false;  //for warning
  }
  int dfs()
  {
  	bool *visited=new bool[V];
  	for(int i=0;i<V;i++)
  	{
  		visited[i]=false;
  	}
  	return dfs_helper(0,visited,-1);
  }
};
int32_t main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
	graph g(5);
  g.addEdge(0,1);
  g.addEdge(1,2);
  g.addEdge(2,4);
  g.addEdge(0,3);
  g.addEdge(3,4);
  if(g.dfs())
    cout<<"Cycle is present";
  else
    cout<<"Cycle is not present";
	return 0;
}