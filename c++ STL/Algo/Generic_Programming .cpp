#include <bits/stdc++.h>
using namespace std;

template<typename T>
int linear_search(T a[], int n,  T key){

    for(int i=0;i<n;i++){
        if(a[i]==key){
            return (i+1);
        }
    }

    return n;

}
int main() {
    int n;
    cin>>n;

    float a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    float key;
    cin>>key;


    cout<<linear_search(a,n,key);
}
