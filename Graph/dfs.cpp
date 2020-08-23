#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mod             1000000007
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define f(i,s,n)		for(int i=s;i<n;i++)

void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void inputArray(int a[], int n){
	f(i,0,n){
		cin>>a[i];
	}
}

void outputArray(int a[], int n){
	f(i,0,n){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}


bool inc(int a[], int n){
	f(i,1,n){
		if(a[i-1]>a[i])
			return false;
	}
	return true;

}

class Graph{

	map<int,list<int>>l;

public:


	void addEdge(int x,int y){
		l[x].push_back(y);
		l[y].push_back(x);
	}

	void dfs_helper(int src, map<int,int> &visited){

		cout<<src<<" ";
		visited[src]=true;

		for(auto nbr: l[src]){
			if(!visited[nbr]){
				dfs_helper(nbr,visited);
			}
		}
	}

	void dfs(int src){
		map<int , int> visited;
		dfs_helper(src, visited);


	}
	
	
};





void solve()
{

	Graph g;
	g.addEdge(0,1);
	g.addEdge(0,3);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(4,5);
	g.dfs(0);



}



int32_t main()
{
	io();
	solve();
	return 0;
}
