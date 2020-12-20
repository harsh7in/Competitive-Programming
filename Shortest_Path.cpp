#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int bfs(vector<int> *graph,int src,int n,int ans){
	vector<int> dist(n+1,INT_MAX);
	queue<int> q;
	q.push(src);
	dist[src]=0; 

	while (!q.empty()){
		int node=q.front();
		q.pop();
		for(auto nbr:graph[node]){
			if(dist[nbr]==INT_MAX){
				// neighbour node
				dist[nbr]=dist[node]+1;
				q.push(nbr);

			}
			else if(dist[nbr]>=dist[node]);
				// backedge case
				ans=min(ans,dist[nbr]+dist[node]+1);
		}

	}

	return ans;

	
}






void solve()
{

	int n,m;
	cin>>n>>m;
	vector<int> graph[n+1];
	while(m--){
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);	
		graph[b].push_back(a);
	}
	int ans=n+1;


	for(int i=1;i<=n;i++){
		ans=bfs(graph,i,n,ans);
	}


	if(ans==n+1)
		cout<<"No cycle detected\n";
	else
		cout<<"The shortest path is "<<ans<<endl;


 
}



int32_t main()
{
	io();
	solve();
	return 0;
}
