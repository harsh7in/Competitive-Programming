#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

	int n;
	cin>>n;

	int a[100000]={0};
	a[0]=1;
	int len=1;
	int cur=0;
	int num=0;
	int q=2;
	while(q<=n)
	{
		cur=0;
		num=0;
		while(cur<len)
		{
			a[cur]=a[cur]*q;
			a[cur]=a[cur]+num;
			num=a[cur]/10;
			a[cur]=a[cur]%10;
			cur++;
		}
		while(num)
		{
			a[len]=num%10;
			num=num/10;
			len++;
		}

		q++;
	}
	len--;
	while(len>=0)
	{
		cout<<a[len];
		len--;
	}

    cout<<endl;
    }


	return 0;
}
