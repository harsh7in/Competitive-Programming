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
  sort(a,a+n);
  int key;
  cin>>key;

  bool present = binary_search(a,a+n,key);
  cout<<present<<endl;

  int no;
  cin>>no;
  if(binary_search(a,a+n,no))
  cout<<"Number is present"<<endl;
  else
  cout<<"Number is present"<<endl;
}
