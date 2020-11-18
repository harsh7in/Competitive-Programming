#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int lazy[100000]={0};

void buildTree(int *a, int s,int e, int *tree, int index){

		if(s==e){
			tree[index]=a[s];
			return;
		}

		int mid=(s+e)/2;

		buildTree(a,s,mid,tree,2*index);
		buildTree(a,mid+1,e,tree,2*index+1);
		tree[index]=min(tree[2*index],tree[2*index+1]);
		return;


}


void updateLazy(int *tree,int ss,int se, int l,int r,int inc, int index){

	 // Before going down resolve the value
	if(lazy[index]!=0){
		tree[index]+=lazy[index];

		// If not a leaf node 
		if(ss!=se){
			lazy[2*index]+=lazy[index];
			lazy[2*index+1]+=lazy[index];
		}
		lazy[index]=0;	

	}


	// No Overlap
	if(r<ss or l>se)
		return;


	// Complete Overlap

	if(ss>=l and se<=r){
		tree[index]+=inc;
		// If not a leaf node
		if(ss!=se){
			lazy[2*index]+=inc;
			lazy[2*index+1]+=inc;
		}
		return;	
	}

	// Recursive Case
	// Partial Overlap

	int mid=(ss+se)/2;
	updateLazy(tree,ss,mid,l,r,inc,2*index);
	updateLazy(tree,mid+1,se,l,r,inc,2*index+1);
	tree[index]=min(tree[2*index],tree[2*index+1]);
	return;


}





void solve()
{

	int n=6;
	int a[]={1,3,2,-5,6,4};

	int *tree=new int[4*n+1];


	buildTree(a,0,n-1,tree,1);



}



int32_t main()
{
	io();
	solve();
	return 0;
}
