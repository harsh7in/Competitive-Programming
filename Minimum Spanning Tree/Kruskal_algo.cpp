#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


class DSU{
	int *parent;
	int *rank;
	public:
		DSU(int v){
			parent=new int[v];
			rank=new int[v];

			for(int i=0;i<v;i++){
				parent[i]=-1;
				rank[i]=1;
			}
		}


		// Find
		int findSet(int i){
			if(parent[i]== -1)
				return i;
			return parent[i]=findSet(parent[i]);
		}

		void unionSet(int a,int b){
			int x=findSet(a);
			int y=findSet(b);
			if(x!=y){
				if( rank[x]<rank[y]){
					parent[x]=y;
					rank[y]+=rank[x];
				}
				else{
					parent[y]=x;
					rank[x]=rank[y];
				}

			}

		}


};


class Graph{

	vector<vector<int>> edgelist;
	int v;

	public:
		Graph(int v){
			this->v=v;
		}

		void addEdge(int a,int b,int w){
			edgelist.push_back({w,a,b});
		}


		int kruskal_algo(){

		// Sort all the edges based upon weight
			sort(edgelist.begin(),edgelist.end());

			DSU s(v);

			int ans=0;
			for(auto edge:edgelist){
				int w=edge[0];
				int x=edge[1];
				int y=edge[2];

				// Take the edge in the mst if it doesnot form a cycle

				if(s.findSet(x)!=s.findSet(y)){
					s.unionSet(x,y);
					ans+=w;
				}

			}

			return ans;

		}



};



void solve()
{

	Graph g(4);
	g.addEdge(0,1,1);
	g.addEdge(1,3,3);
	g.addEdge(3,2,4);
	g.addEdge(2,0,2);
	g.addEdge(0,3,2);
	g.addEdge(1,2,2);


	
	cout<<g.kruskal_algo()<<endl;


}



int32_t main()
{
	io();
	solve();
	return 0;
}
