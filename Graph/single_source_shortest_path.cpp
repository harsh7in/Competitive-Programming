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

	
	void shortest_path(int src){
		map<int , int> distnace;
		queue<int> q;

		for(auto i:l){
			int node = i.first;
			distnace[node]=INT_MAX;
		}
		q.push(src);
		distnace[src]=0;

		while(!q.empty()){
			int node=q.front();
			q.pop();

			for(auto nbr: l[node]){
				if(distnace[nbr]==INT_MAX){
					q.push(nbr);
					distnace[nbr]=distnace[node]+1;

				}
				
			}
		}
		for(auto i:l){
		int node=i.first;
		int d=distnace[node];
		cout<<"Node  "<<node<<"   distance from src  "<<d<<endl;
	}
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
	g.shortest_path(0);



}



int32_t main()
{
	io();
	solve();
	return 0;
}
