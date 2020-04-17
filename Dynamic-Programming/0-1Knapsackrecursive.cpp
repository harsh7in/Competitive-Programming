#include<bits/stdc++.h>
using namespace std;
int knap(int n,int val[],int w[],int wt)
{
	if(n==0 || wt==0)        /*Base Case */
	return 0;
	if(w[n-1]>wt)            /* if any perticular wieght is greater then total wieght  */
	return knap(n-1,val,w,wt);
	return max(val[n-1]+knap(n-1,val,w,wt-w[n-1]),knap(n-1,val,w,wt));  /* find max when include/exclude that elements */
}
int main()
{
	int n,val[100],w[100],wt,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>val[i];
	for(i=0;i<n;i++)
	cin>>w[i];
	cin>>wt;
	j=knap(n,val,w,wt);
	cout<<j;
	return 0;
}