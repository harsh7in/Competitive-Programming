#include<bits/stdc++.h>
#define ll long long
using namespace std;

int digit_in_fact(int n)
{
  if (n<0)
        return 0;
    if(n<=1)
        return 1;
  double x=( n*log10(n/M_E) + log10(2*M_PI*n)/2.0);
  return (floor(x)+1);
}


int main()
{
  int t;
  cin>>t;
  long n;
  while (t--)
  {
    cin>>n;
    cout<<digit_in_fact(n);
  }

  return 0;
}
