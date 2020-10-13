#include <bits/stdc++.h>
using namespace std;
int main() {
    
    vector<int> v{1,2,3,4,5,6};

    for(auto x: v){
        cout<<x<<" ";
    }cout<<endl;

    v.insert(v.begin()+3, 100);
    

    cout<<"\n after 3rd element we will insert our element \n";




    for(auto x: v){
        cout<<x<<" ";
    }cout<<endl;


    cout<<"\n after 3rd element we will insert our element 4 times \n";


    v.insert(v.begin()+3, 4,100);

       for(auto x: v){
        cout<<x<<" ";
    }cout<<endl;


    cout<<"\n erase element after 2 position \n";

    v.erase(v.begin()+2);

         for(auto x: v){
        cout<<x<<" ";
    }cout<<endl;


    cout<<"\n erasing a number of elements \n";


     v.erase(v.begin()+2, v.begin()+5);

    
     v.erase(v.begin()+2);

         for(auto x: v){
        cout<<x<<" ";
    }cout<<endl;


    cout<<"\n remove all the elements of the vector \n";
    v.clear();

    v.push_back(10);

             for(auto x: v){
        cout<<x<<" ";
    }cout<<endl;




}
