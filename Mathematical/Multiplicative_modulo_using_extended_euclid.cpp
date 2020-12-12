#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
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


int inverseModulo(int a,int m){

	extendedEuclidMethod(a,m);
	return (x+m)%m;

}





void solve()
{


	cout<<inverseModulo(6,7)<<endl;

 
}



int32_t main()
{
	io();
	solve();
	return 0;
}
