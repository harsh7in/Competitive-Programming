#include <bits/stdc++.h>
using namespace std;
int main() {

    map<string,int> m;

    // Insert
    m.insert(make_pair("mango", 100));

    // Insert
    pair<string, int> p;
    p=make_pair("apple", 120);
    m.insert(p);

    // Insert
    m["banana"]=20;



    // search

    string fruit;
    cin>>fruit;
   

   for(auto it= m.begin(); it!= m.end(); it++){
       cout<<it->first<< "   "<<it->second<<endl;
   }

   cout<<"Second method for iteration "<<endl;

   for( auto p :  m){
       cout<<p.first<<"  :  "<<p.second<<endl;
   }


    return 0;
}
