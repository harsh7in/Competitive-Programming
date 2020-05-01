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



int fib_bp(int n)
{
	int a,b,c;
	a=0;
	b=1;
	for(int i=2;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}

	return c;

}


void solve()
{
	int n;
	cin>>n;

	cout<<fib_bp(n)<<endl;



}


int32_t main()
{
	io();
	solve();
	return 0;
}
