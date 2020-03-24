#include<bits/stdc++.h>
#define ll long long
using namespace std;

int sum_digit(int n)
{
  if(n==0)
    return 0;

  return (sum_digit(n/10)+n%10);
}


int main()
{
  int t;
  cin>>t;
  long n;
  while (t--)
  {
    cin>>n;
    cout<<sum_digit(n);
  }

  return 0;
}
