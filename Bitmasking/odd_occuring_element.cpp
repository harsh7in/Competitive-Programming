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


void solve()
{

    w(t)
    {
        	int n;
	cin>>n;
	int a[n];
	f(i,0,n)
		cin>>a[i];

	int num=0;
	f(i,0,n)
	{
		num=num^a[i];
	}
	cout<<num;
    cout<<endl;
    }

}


int32_t main()
{

	solve();
	return 0;
}
