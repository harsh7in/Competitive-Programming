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
	int V;
	list<int> *l;
	public:
		Graph(int V){
			this->V=V;
			l=new list<int>[V];
		}

		void addEdge(int x,int y){
			l[x].push_back(y);
			l[y].push_back(x);
		}

		void printList(){
			for(int i=0;i<V;i++){
				cout<<"Vertex "<<i<<"-->";
				for(int nbr:l[i])
					cout<<nbr<<",";

			cout<<endl;
			}

		}
		
};


void solve()
{

	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.printList();

}



int32_t main()
{
	io();
	solve();
	return 0;
}
