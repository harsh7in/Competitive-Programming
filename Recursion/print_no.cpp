#include<bits/stdc++.h>
#define ll long long
using namespace std;

int print_no(int n)
{
  if (n==1)
    return 1;
    cout<<n<<" ";
    return print_no(n-1);

}


int main()
{
  int t;
  cin>>t;
  long n;
  while (t--)
  {
    cin>>n;
    cout<<print_no(n);
  }

  return 0;
}
