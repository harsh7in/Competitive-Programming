#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


class Graph{

	map<int,list<int>>l;

public:


	void addEdge(int x,int y){
		l[x].push_back(y);
	}

	void dfs_helper(int src, map<int,int> &visited,list<int> &ordering){

		visited[src]=true;

		for(auto nbr: l[src]){
			if(!visited[nbr]){
				dfs_helper(nbr,visited,ordering);
			}
		}

		
		ordering.push_front(src);

	}

	void dfs(){
		map<int , int> visited;
		list<int> ordering;


		for(auto i:l){
			int node=i.first;

			if(!visited[node]){
				dfs_helper(node, visited,ordering);
			}
		}

		for(int x:ordering)
			cout<<x<<endl;
		


	}
	
};





void solve()
{

	Graph g;
	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(1,4);
	g.addEdge(2,3);
	g.addEdge(4,5);
	g.addEdge(3,5);
	g.addEdge(5,7);
	g.addEdge(6,7);

	g.dfs();



 
}



int32_t main()
{
	io();
	solve();
	return 0;
}
