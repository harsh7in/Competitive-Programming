#include<bits/stdc++.h>
#define int long long
using namespace std;


int sum(int n)
{
    if(n==0)
        return 0;

    return (sum(n/10)+n%10);
}

int digitalRoot(int n)
{
    //Your code here
    if(n<=9)
        return n;

    else
    {
             n=sum(n);
         return digitalRoot(n);
    }

}


int32_t main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int sum;
    for(int i=0;i<s.length();i++)
    {
        sum+=(s[i]-'0');
    }
    int p;
    p=digitalRoot(sum);
    p*=k;
    int t;
    t=digitalRoot(p);
    cout<<t;
}
