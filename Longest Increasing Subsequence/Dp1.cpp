#include<bits/stdc++.h>
using namespace std;


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
	int a[n];

	for(int i=0;i<n;i++)
		cin>>a[i];

	int dp[n]={1};

	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){

			if(a[j]<a[i])
				dp[i]=max(dp[i],dp[j]+1);

		}
	}

	int mx=0;

	for(int i=0;i<n;i++)
		mx=max(dp[i],mx);

	cout<<mx<<endl;






}



int32_t main()
{
	io();
	solve();
	return 0;
}
