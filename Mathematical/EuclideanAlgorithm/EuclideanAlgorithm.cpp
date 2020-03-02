#include<bits/stdc++.h>
using namespace std;
// Recursive function of  Euclidean algorithm
int gd(int a,int b)
{
	if(b==0)
	return a;
	return gd(b,a%b);
}
int main()
{
	long long a,b,gcd;
	cin>>a>>b;
	gcd=gd(a,b);    // function calling
	cout<<gcd<<endl;
	return 0;
}
