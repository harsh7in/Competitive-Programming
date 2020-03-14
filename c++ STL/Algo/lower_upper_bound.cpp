#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;

  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
    cout<<a[i];
  }
  cout<<endl;

  int k;
  cin>>k;

  // lower_bound returns >= element from the given no.
  auto lb = lower_bound(a,a+n,k);
  cout<<"lower bound :  "<<*lb<<endl;
  cout<<"index of lower bound :"<<(lb-a)<<endl;

  // upper_bound returns > element from the given no.
  auto up = upper_bound(a,a+n,k);
  cout<<"upper bound :  "<<*up<<endl;
  cout<<"index of upper bound :"<<(up-a)<<endl;


}
