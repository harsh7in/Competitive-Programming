#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int hash_string(string s){	

	int p=31,m=1e9+7;
	int pow_p=1;
	int hash=0;

	for(int i=0;i<s.size();i++){

		hash+=(pow_p*(s[i]-'a'+1));
		pow_p*=p;
		pow_p%=m;
		hash%=m;
	}

	return hash;

}



void solve()
{

	string s;
	cin>>s;

	int str_hash=hash_string(s);

	cout<<str_hash<<endl;




}



int32_t main()
{
	io();
	solve();
	return 0;
}
