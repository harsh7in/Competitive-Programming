#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


bool checkSum(int *a,int n){

	unordered_set<int> us;

	int tot=0;
	for(int i=0;i<n;i++){
		tot+=a[i];
		if(tot==0 or us.find(tot)!=us.end())
			return true;

		us.insert(tot);
	}
	return false;


}




void solve()
{

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	if(checkSum(a,n))
		cout<<"Yes";
	else
		cout<<"No";

 
}



int32_t main()
{
	io();
	solve();
	return 0;
}
