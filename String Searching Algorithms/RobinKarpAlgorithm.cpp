#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


const int m=1e9+7;

// To find (a^b)%p  by using binary exponentiation
int powr(int a,int b){
	int res=1; 
	while(b){
		if(b&111){
			res*a;
			res%=m;

		}

		b/=2;
		a*=a; 
		a%=m;
	}

	return res;


}

int inv(int a){
	return powr(a,m-2);

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

	string s,text;
	cin>>text;
	cin>>s;

	int str_hash=hash_string(s);

	int n=text.size();
	int l=s.size();

	int text_hash=hash_string(text.substr(0,l));

	if (text_hash==str_hash)
		cout<<0<<endl;

	for(int i=l;i+l<n;i++){

		int new_hash=text_hash;

		// [i-m] th
		// removed the [i-m] character
		new_hash=(new_hash-(text[i-1]-'a'+1)+m)%m;

		//second step

		new_hash*=inv(31);

		new_hash%=m;

		// third step
		new_hash=new_hash+ (text[i+l-1]-'a'+1)*powr(31,m-1);
		new_hash%=m;

		if(new_hash==str_hash)
			cout<<i<<endl;

		text_hash=new_hash;



	}





}



int32_t main()
{
	io();
	solve();
	return 0;
}
