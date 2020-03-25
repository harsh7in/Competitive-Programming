#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
 {
	int t;
	cin>>t;
	ll n;
	while(t--)
	{
	    cin>>n;
	    if (n==0)
	   {
	       cout<<"NO"<<endl;
	       break;
	   }
	    if(ceil(log2(n))==floor(log2(n)))
	        cout<<"YES";
        else
            cout<<"NO";

        cout<<endl;
	}

	return 0;
}
