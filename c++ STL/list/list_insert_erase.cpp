#include <bits/stdc++.h>
using namespace std;


int main() {


    list<string> l;
    l.push_back("orange");
    l.push_back("mango");
    l.push_back("apple");

    for(auto x: l){
        cout<<x<<"->";
    }cout<<endl;



    cout<<"\n removing a particular element \n ";

    l.remove("orange");
    for(auto x: l){
        cout<<x<<"->";
    }cout<<endl;

    l.push_back("one");
    l.push_back("two");
    l.push_back("three");
    l.push_back("etc");


    for(auto x: l){
        cout<<x<<"->";
    }cout<<endl;


    cout<<"\n removeing accorrding element after 2 index \n";

    auto it = l.begin();
    it++;it++;

    l.erase(it);




    for(auto x: l){
        cout<<x<<"->";
    }cout<<endl;

    cout<<"\n inserting after 1st index \n";

    it=l.begin();
    it++;

    l.insert(it, "include at 2 position");

    for(auto x: l){
        cout<<x<<"->";
    }cout<<endl;





}
