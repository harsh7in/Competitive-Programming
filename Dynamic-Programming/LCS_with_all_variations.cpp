#include<bits/stdc++.h>
using namespace std;
int static dp[100][100];  //globally declare so that we can use this in any where
int recursive_lcs(string s1,string s2,int n,int m)
{
	// base case
	if(n<=0 || m<=0)
		return 0;

	if(s1[n-1]==s2[m-1])
		return 1+recursive_lcs(s1,s2,n-1,m-1);
	int v1=recursive_lcs(s1,s2,n-1,m);
    int v2=recursive_lcs(s1,s2,n,m-1);
    return max(v1,v2);
}
int memorized_dp(string s1,string s2,int n,int m)
{
   // base case
	if(n<=0 || m<=0)
		return 0;
    if(dp[n][m]!=-1)
    {
    	return dp[n][m];
    }
	if(s1[n-1]==s2[m-1])
		return dp[n][m]=1+memorized_dp(s1,s2,n-1,m-1);
	else
	{
	int v1=memorized_dp(s1,s2,n-1,m);
    int v2=memorized_dp(s1,s2,n,m-1);
    return dp[n][m]=max(v1,v2);
    }
}
int topdownlcs(string s1,string s2,int n ,int m)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(s1[i-1]==s2[j-1])
				dp[i][j]=dp[i-1][j-1]+1;
			else
			{
                int v1= dp[i-1][j];
                int v2= dp[i][j-1];
                dp[i][j]=max(v1,v2);
			}
		}
	}
	return dp[n][m];
}
int lcsubstring(string s1,string s2,int n,int m)
{
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(s1[i-1]==s2[j-1])
			{
				dp[i][j]=dp[i-1][j-1]+1;
			    ans=max(ans,dp[i][j]);
			}
			else
			{
                dp[i][j]=0;    // only change 
			}
		}
	}
	return ans;
}
void printlcs(string s1,string s2,int n,int m)
{
	string ans;
	 int i=n,j=m;
	 while(i>0 && j>0)
	 {
	 	if(s1[i-1]==s2[j-1])
	 	{
	 		ans.push_back(s1[i-1]);
	 		i--;
	 		j--;
	 	}
	 	else
	 	{
	 		if(dp[i-1][j]>dp[i][j-1])
	 		{
                i--;
	 		}
	 		else
	 		{
               j--;
	 		}
	 	}
	 }
	 reverse(ans.begin(),ans.end()); //for reversing the result 
	 cout<<ans<<endl;
}
void printscs(string s1,string s2,int n,int m)
{
	string ans;
	 int i=n,j=m;
	 while(i>0 && j>0)
	 {
	 	if(s1[i-1]==s2[j-1])
	 	{
	 		ans.push_back(s1[i-1]);
	 		i--;
	 		j--;
	 	}
	 	else
	 	{
	 		if(dp[i-1][j]>dp[i][j-1])
	 		{
                i--;
                ans.push_back(s1[i-1]);
	 		}
	 		else
	 		{
               j--;
               ans.push_back(s2[j-1]);
	 		}
	 	}
	 }
	 //for making i and j both 
	 while(i>0)
	 {
          ans.push_back(s1[i-1]);
	 }
	 while(j>0)
	 {
	 	 ans.push_back(s2[j-1]);
	 }
	 reverse(ans.begin(),ans.end()); //for reversing the result 
	 cout<<ans<<endl;
}

int main()
{
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif  

    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();
    int m=s2.length();
    memset(dp,-1,sizeof(dp));
    cout<<recursive_lcs(s1,s2,n,m)<<endl;
    cout<<memorized_dp(s1,s2,n,m)<<endl;
    memset(dp,0,sizeof(dp)); // for implement topdown approach
    cout<<"length of longest common subsequence:"<<topdownlcs(s1,s2,n,m)<<endl;
    // for printing thr table 
    // for(int i=0;i<=12;i++)
    // {
    // 	for(int j=0;j<=12;j++)
    // 	{
    // 		cout<<dp[i][j]<<" ";
    // 	}
    // 	cout<<endl;
    // }



    // other problems
    cout<<"length of longest common substring: "<<lcsubstring(s1,s2,n,m)<<endl;
    memset(dp,0,sizeof(dp)); // for implement topdown approach
    cout<<"length of shortest common supersequence: "<<(n+m-topdownlcs(s1,s2,n,m))<<endl;
    cout<<"LCSubsequence is: ";
    printlcs(s1,s2,n,m);
    cout<<"SCS is: ";
    printscs(s1,s2,n,m);

    // minimum no of insertions and deletions to make s1 to s2
    memset(dp,0,sizeof(dp)); // for implement topdown approach
    cout<<"No of insertion: "<<m-topdownlcs(s1,s2,n,m)<<endl;
    memset(dp,0,sizeof(dp)); // for implement topdown approach
    cout<<"No of deletions: "<<n-topdownlcs(s1,s2,n,m)<<endl;
    // LPS for string s1, 
    string s3=s1;    // store the s1 in s3 for reverse
    memset(dp,0,sizeof(dp)); // for implement topdown approach
    reverse(s3.begin(),s3.end());      // reverse the string s3 
    cout<<"length of Longest Palindromic sequence: "<<topdownlcs(s1,s3,n,n)<<endl;

   
    memset(dp,0,sizeof(dp)); // for implement topdown approach

    cout<<"minimum no of intertions or deletions to make a string Palindrom: "<<n-topdownlcs(s1,s3,n,n)<<endl;
	return 0;
}