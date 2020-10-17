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
    auto it=m.find(fruit);
    if(it != m.end()){
        cout<<"Price of  "<<fruit<<" is "<<m[fruit]<<endl;
    }
    else{
        cout<<"Fruit is not Present"<<endl;
    }

    cout<<"size of the map  "<<m.size()<<endl;
    m.erase(fruit);

    cout<<"size of the map after removing one element "<<m.size()<<endl;


    return 0;
}
