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
  cout<<"Unsorted Array"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }

  sort(a,a+n);

  cout<<endl<<"sorted Array"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
