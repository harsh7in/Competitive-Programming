#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long num;
	cin>>num;
	long long a[num+1],i,j;
	for(i=2;i<=num;i++)
	a[i]=1;
	a[0]=a[1]=0;
	for(i=2;i*i<=num;i++)
	{
		if(a[i])
		{
			for(j=i*i;j<=num;j+=i)
			a[j]=0;
		}
	}
	for(i=2;i<=num;i++)
	{
		if(a[i]==1)
		cout<<i<<" ";
	}
}


