//The pair container is a simple container defined in <utility> header consisting of two data elements or objects.

  //The first element is referenced as 'first' and the second element as 'second' and the order is fixed (first, second).
  //To access the elements we use dot operator.
  //Pair can be assigned, copied, compared.


//        Syntax
//    pair(data_type1 ,data_type2) Pair name;

#include <bits/stdc++.h>
using namespace std;
int main()
{
  pair<int , char> p;
  p.first=1;  
  p.second='h';

  cout<<p.first<<" ";
  cout<<p.second<<endl;

  return 0;
}
