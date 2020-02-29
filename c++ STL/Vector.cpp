#include <bits/stdc++.h>
using namespace std;
int main()
{
  //initializing a vector v;
  vector<int> v;

  //inserting element
  v.push_back(1);
  v.push_back(-10);
  v.push_back(10);
  v.push_back(5);

  //printing element
  for(int i=0;i<4;i++)
  {
    cout<<v[i]<<endl;
  }


  cout<<"After sorting element"<<endl;
  sort(v.begin(),v.end());
  for(int i=0;i<4;i++)
  {
    cout<<v[i]<<endl;
  }
}
