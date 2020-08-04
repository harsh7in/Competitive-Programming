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

class graph{
	public:
		map<string,list<pair<string,int>>> l;

		void addEdge(string x, string y, bool dir , int w){
			l[x].push_back(make_pair(y,w));
			if(dir)
				l[y].push_back(make_pair(x,w));
		}



		void printList(){
			for(auto p:l){
				cout<<p.first<<"-->";
				list<pair<string,int>> a=p.second;
				for(auto x:a){
					cout<<x.first<<" "<<x.second<<",";
				}
				cout<<endl;
			}
		}
	
};

void solve()
{

	graph g;
	g.addEdge("a","b",true,20);
	g.addEdge("b","d",true,40);
	g.addEdge("a","c",true,10);
	g.addEdge("c","d",true,30);
	g.addEdge("a","d",false,50);
	g.printList();

}



int32_t main()
{
	io();
	solve();
	return 0;
}
