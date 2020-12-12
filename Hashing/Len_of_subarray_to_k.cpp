#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int longestSubarraySumZero(int *a,int n,int k){

	unordered_map<int,int> mp;

	int tot=0;
	int len=0;
	for(int i=0;i<n;i++){
		tot+=a[i];

		if(tot==k)
			len=max(len,i+1);

		if(mp.find(tot-k)!=mp.end())
			len=max(len,i-mp[tot-k]);

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

	int k; cin>>k;

	cout<<longestSubarraySumZero(a,n,k);

 
}



int32_t main()
{
	io();
	solve();
	return 0;
}
