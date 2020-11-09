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



void solve()
{

	int n=6;
	int a[]={1,3,2,-5,6,4};

	int *tree=new int[4*n+1];


	buildTree(a,0,n-1,tree,1);

	for (int i = 1; i < 14; ++i)
	{
		cout<<tree[i]<<" ";
	}

}



int32_t main()
{
	io();
	solve();
	return 0;
}
