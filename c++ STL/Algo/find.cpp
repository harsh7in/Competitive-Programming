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

  cout<<"Enter the no you want to search"<<endl;
  int k;
  cin>>k;

  auto present=find(a,a+n,k);

  int index=present-a;
  if(index==n)
    cout<<"element is not present"<<endl;
  else
  cout<<"Index of the given element :  "<<index<<endl;
}
