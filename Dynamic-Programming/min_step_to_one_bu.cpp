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



int minSteps_bu(int n)
{
	int dp[100]={0};

	dp[1]=0;

	int a,b,c;



	for(int i=2;i<=n;i++)
	{
		a=b=c=INT_MAX;
		if(i%3==0)
			a=dp[i/3]+1;

		if(i%2==0)
			b=dp[i/2]+1;

		c=dp[i-1]+1;


		dp[i]=min(min(a,b),c);
	}


	return dp[n];
}



void solve()
{
	int n;
	cin>>n;

	cout<<minSteps_bu(n)<<endl;

}


int32_t main()
{
	io();
	solve();
	return 0;
}
