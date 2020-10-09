#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int res=0;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		res=res^a[i];
	}

	int temp=res;
	int pos=0;
	while((temp&1)==0){
		pos++;
		temp=temp>>1;
	}

	int mask=1<<pos;

	int x=0,y=0;

	for(int i=0;i<n;i++){
		if((a[i]&mask)>0){
			x=x^a[i];
		}
	}

	y=res^x;

	cout<<min(x,y)<<" "<<max(x,y)<<endl;
		
	return 0;
}
