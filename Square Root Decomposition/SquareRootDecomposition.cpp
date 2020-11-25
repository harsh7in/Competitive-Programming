#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int query(int *blocks,int *a,int l,int r,int bsize){

	int ans=0;


	// Left Part
	while(l<r && l!=0 && l%bsize!=0){
		ans+=a[l];
		l++;
	}

	// Middle part
	while(l+bsize<=r){
		int bidx=l/bsize;
		ans+=blocks[bidx];
		l+=bsize;

	}

	// Right part

	while(l<=r){
		ans+=a[l];
		l++;
	}


	return ans;


}

void update(int *blocks,int *a,int i,int val,int bsize){
	int bidx=i/bsize;
	blocks[bidx]+=(val-a[i]);
	a[i]=val;
}




void solve()
{

	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	int bsize=sqrt(n);
	int *blocks=new int[bsize+1]{0};


	// Bulid a Block array
	// size of block array is sqrt(array)

	int bidx=-1;
	for(int i=0;i<n;i++){
		if(i%bsize==0)
			bidx++;

		blocks[bidx]+=a[i];


	}


	int l,r;
	cin>>l>>r;
	update(blocks,a,2,15,bsize);
	cout<<query(blocks,a,l,r,bsize);





}



int32_t main()
{
	io();
	solve();
	return 0;
}
