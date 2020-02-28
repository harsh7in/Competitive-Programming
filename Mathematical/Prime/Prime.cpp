#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
      c++;
  }
  if(c==0)
    cout<<"Prime"<<endl;
  else
    cout<<"Not Prime"<<endl;
}
