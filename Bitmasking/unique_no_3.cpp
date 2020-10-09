#include<bits/stdc++.h>
using namespace std;
int main() {

	int n,no;
	cin>>n;

	int ar[64]={0};

	for(int i=0;i<n;i++){
		cin>>no;

		int j=0;
		while(no>0){
			int ls=(no&1);
			ar[j]+=ls;
			j++;
			no=no>>1;

		}

	}


	int p=1;
	int ans=0;
	for(int i=0;i<64;i++){
		ar[i]=ar[i]%3;
		ans+=(ar[i]*p);
		p=p<<1;


	}


	cout<<ans<<endl;
	




	

	return 0;
}
