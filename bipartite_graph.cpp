#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}



bool bipartite_helper(vector<int> *graph,int node,int *visited,int parent,int color){

	visited[node]=color;

	for(auto nbr: graph[node]){
		if(visited[nbr]==0){
			bool subProblem=bipartite_helper(graph,nbr,visited,node,3-color);
			if (subProblem==0)
				return false;
		}
		else if(nbr!=parent and color==visited[nbr])
			return false;

	}

	return true;


}



bool bipartite(vector<int> *graph,int n){

	int visited[n]={0};
	int color=1;
	int ans=bipartite_helper(graph,0,visited,-1,color);




	for(int i=0;i<n;i++)
		cout<<i<<" -color "<<visited[i]<<endl;


	return ans;


}



void solve()
{

	int n,m;
	cin>>n,m;

	vector<int> graph[n];
	while(n--){
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	if(bipartite(graph,n))
		cout<<"Yes! The Graph is bipartite";
	else
		cout<<"No! The Graph is not bipertite";




 
}



int32_t main()
{
	io();
	solve();
	return 0;
}
