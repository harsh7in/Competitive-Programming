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



void merge(int a[], int s,int e){

	int mid=(s+e)/2;

	int i=s;
	int j=mid+1;
	int k=s;

	int temp[100];

	while(i<=mid and j<=e){
		if(a[i]<=a[j]){
			temp[k++]=a[i++];
		}
		else{
			temp[k++]=a[j++];
		}
	}

	while(i<=mid){
		temp[k++]=a[i++];
	}

	while(j<=e){
		temp[k++]=a[j++];
	}

	for(int i=s; i<=e;i++){
		a[i]=temp[i];
	}


}

void merge_sort(int a[] , int s, int e){

	if(s>=e)
		return;

	// Following three steps

	int mid=(s+e)/2;

	merge_sort(a,s,mid);
	merge_sort(a,mid+1,e);

	merge(a,s,e);


}



void solve()
{

	int n;
	cin>>n;


	int a[100];

	for(int i=0;i<n;i++)
			cin>>a[i];


	merge_sort(a,0,n-1);

	for(int i=0;i<n;i++)
			cout<<a[i]<<" ";




}


int32_t main()
{
	io();
	solve();
	return 0;
}
