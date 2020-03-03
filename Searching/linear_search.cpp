#include<bits/stdc++.h>
using namespace std;
int main()
{
  //Enter the size of array
  int n;
  cin>>n;
  //creating the array
  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int k;
  cin>>k;

  for(int i=0;i<n;i++)
  {
    if(a[i]==k)
      cout<<"element present"<<endl;
      break;
  }


}
