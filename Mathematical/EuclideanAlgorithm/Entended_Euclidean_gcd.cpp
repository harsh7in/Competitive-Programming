#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int gcd(int a,int b){
	 if(b==0)
	 	return a;

	 return gcd(b,a%b);
}

int x,y,GCD;

void extendedEuclidMethod(int a,int b){
	// base case
	if(b==0){
		x=1; y=0; GCD=a;
		return ;
	}

	// recursive case
	extendedEuclidMethod(b,a%b);

		int cx=y;
		int cy=x-(a/b)*y;

		x=cx;
		y=cy;
	


}




void solve()
{

	cout<<gcd(10,15)<<endl;
	cout<<gcd(14,10)<<endl;

	extendedEuclidMethod(18,30);
	cout<<x<<" "<<y<<endl;


 
}



int32_t main()
{
	io();
	solve();
	return 0;
}
