#include<bits/stdc++.h>
#define ll long long
using namespace std;

int count_digit(int n)
{
  return floor(log10(n)+1);
}


int main()
{
  int t;
  cin>>t;
  long n;
  while (t--)
  {
    cin>>n;
    cout<<count_digit(n);
  }

  return 0;
}
