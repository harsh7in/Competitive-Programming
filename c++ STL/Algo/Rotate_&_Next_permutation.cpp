#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[]={10,20,30,40,50,60 ,70, 80, 90,100};
    int n=10;

    rotate(a,a+3,a+n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;

    int b[]={1,2,3};
    n=3;
    cout<<"Before Permutation "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }

    next_permutation(b,b+n);
    next_permutation(b,b+n);

    cout<<endl;
    cout<<"After Permutation"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }


}
