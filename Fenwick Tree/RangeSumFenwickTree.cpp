#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int a[10000];
int bit[10000]={0};


void update(int i,int inc,int n){

	while(i<=n){
		bit[i]=max(bit[i],inc);
		i+=(i&(-i));
	}
}

int query(int i){

	int ans=0;
	while(i>0){
		ans=max(bit[i],ans);
		i-=(i&(-i));
	}
	return ans;
}



void solve()
{

	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		cin>>a[i];
		update(i,a[i],n);
	}

	int q;
	cin>>q;
	while(q--){
		int index;
		cin>>index;
		cout<<query(index)<<endl;

	}


}



int32_t main()
{
	io();
	solve();
	return 0;
}
