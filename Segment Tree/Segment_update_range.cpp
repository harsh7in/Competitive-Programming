#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

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


int query(int *tree, int ss,int se,int qs,int qe, int index){

	// Complete Overlap
	if(ss>=qs and se<=qe){
		return tree[index];
	}


	// No Overlap
	if(qe<ss or qs>se){
		return INT_MAX;
	}


	// Partial Overlap
	int mid=(ss+se)/2;
	int left= query(tree,ss,mid,qs,qe,2*index);
	int right=query(tree,mid+1,se,qs,qe,2*index+1);
	return min(left,right);

}


void updateNode(int *tree, int ss,int se, int i, int inc, int index){

	// Case where the i is out of bounds
	if(i>se or i<ss)
		return;

	// Leaf node
	if(ss==se){
		tree[index]+= inc;
		return;
	}

	// Otherwise
	int mid=(ss+se)/2;
	updateNode(tree,ss,mid,i,inc,2*index);
	updateNode(tree,mid+1,se,i,inc,2*index+1);
	tree[index]=min(tree[2*index], tree[2*index+1]);
	return;
}


void updateRange(int *tree, int ss,int se, int l,int r, int inc, int index){

	// Case where the i is out of bounds
	if(l>se or r<ss)
		return;

	// Leaf node
	if(ss==se){
		tree[index]+= inc;
		return;
	}

	// Otherwise
	int mid=(ss+se)/2;
	updateRange(tree,ss,mid,l,r,inc,2*index);
	updateRange(tree,mid+1,se,l,r,inc,2*index+1);
	tree[index]=min(tree[2*index], tree[2*index+1]);
	return;
}






void solve()
{

	int n=6;
	int a[]={1,3,2,-5,6,4};

	int *tree=new int[4*n+1];


	buildTree(a,0,n-1,tree,1);

	updateRange(tree,0,n-1,3 ,5,10,1);

	
	int  q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		cout<<query(tree,0,n-1,l,r,1)<<endl;

	}

}



int32_t main()
{
	io();
	solve();
	return 0;
}
