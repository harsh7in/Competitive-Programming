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

void solve()
{

	int n;
	cin>>n;
	int r=0;
	while(n>0)
	{
		n=n&(n-1);
			r++;

	}
	if(r==1)
	{
		cout<<" power of two";
	}
	else
	{
		cout<<"Not power of two";
	}

}


int32_t main()
{
	io();
	solve();
	return 0;
}
