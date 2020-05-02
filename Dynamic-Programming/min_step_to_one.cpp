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

//min step problem


int minSteps(int n, int dp[])
{
	if(n==1)
		return 0;
	int a,b,c;
	a=b=c=INT_MAX;


	if(dp[n]!=0)
		return dp[n];


	if(n%3==0)
		a=minSteps(n/3,dp)+1;


	if(n%2==0)
		b=minSteps(n/2,dp)+1;


	c=minSteps(n-1,dp)+1;

	int ans;
	ans=min(min(a,b),c);
	dp[n]=ans;
	return dp[n];




}

void solve()
{
	int n;
	cin>>n;
	int dp[100]={0};

	cout<<minSteps(n,dp);



}


int32_t main()
{
	io();
	solve();
	return 0;
}
