#include <bits/stdc++.h>
using namespace std;

int main() {
    
    priority_queue<int> pq_max;
    priority_queue<int, vector<int> ,greater<int> > pq;

    int n;
    cin>>n;

    int no;
    for(int i=1;i<n;i++){

        cin>>no;
        pq.push(no);

    }

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }



}
