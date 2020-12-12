#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int longestSubarraySumZero(int *a,int n){

	unordered_map<int,int> mp;

	int tot=0;
	int len=0;
	for(int i=0;i<n;i++){
		tot+=a[i];

		if(tot==0)
			len=max(len,i+1);

		if(mp.find(tot)!=mp.end())
			len=max(len,i-mp[tot]);

		else
			mp[tot]=i;

	}
	return len;


}




void solve()
{

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	cout<<longestSubarraySumZero(a,n);

 
}



int32_t main()
{
	io();
	solve();
	return 0;
}
