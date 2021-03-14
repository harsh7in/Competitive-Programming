#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

vector<int> removeDup(int *a,int n){
	vector<int> v;
	unordered_map<int,bool> um;

	for(int i=0;i<n;i++){
		if(um.count(a[i])>0)
			continue;
		um[a[i]]=true;
		v.push_back(a[i]);
	}

	return v;

	
}




void solve()
{

	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	vector<int> ans = removeDup(a,n);

	for(auto i:ans)
		cout<<i<<" ";




}



int32_t main()
{
	io();
	solve();
	return 0;
}
