#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,val[100],w[100],weight,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>val[i];
	for(i=0;i<n;i++)
	cin>>w[i];
	cin>>weight;
	int dp[n+1][weight+1];         
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=weight;j++)
		{
			if(i==0 || j==0)    
			dp[i][j]=0;
			else if(w[i-1]>weight)
			dp[i][j]=dp[i-1][j];
			else
			dp[i][j]=max(val[i-1]+dp[i-1][j-w[i-1]],dp[i-1][j]);
		}
	}
	cout<<dp[n][weight];
	return 0;
}