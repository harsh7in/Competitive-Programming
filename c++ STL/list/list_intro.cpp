#include <bits/stdc++.h>
using namespace std;


int main() {
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_front(5);

    for(auto x: l1){
        cout<<x<<" ";
    }cout<<endl;


    cout<<l1.front()<<endl;

    cout<<l1.back()<<endl;


    l1.sort();

    for(auto x: l1){
        cout<<x<<" ";
    }cout<<endl;


   l1.pop_front();

    l1.pop_back();


    for(auto x: l1){
        cout<<x<<" ";
    }cout<<endl;




}
