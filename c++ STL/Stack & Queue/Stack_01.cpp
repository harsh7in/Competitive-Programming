#include <bits/stdc++.h>
using namespace std;
int main(){

    stack<int> s;

    // For insering array
    s.push(1);
    s.push(1);
    s.push(1);
    s.push(1);
    for(int i=5;i<10;i++)
        s.push(i);

    //For show array elements
    while(s.empty()==0){
        cout<<s.top()<<" ,";
        s.pop();

    }

}
