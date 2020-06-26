#include <bits/stdc++.h>
using namespace std;
int main() {
    queue<int> q;


    // inserting elements
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    // inserting array using loops
    for(int i=5;i<10;i++)
    {
        q.push(i);
    }


    // printing 
    while(q.empty()==0)
    {
        cout<<q.front()<<" ";
        q.pop();
    }

}
