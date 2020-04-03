#include <bits/stdc++.h>
using namespace std;
int main()
{

  //count(firt index, last index,x)
    //To return the occurence of x in array/vector

    int a[]={10,20,25,41,65,85,35,41};
    int n= sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
      cout<<a[i]<<" ";

    vector<int> v(a,a+n);

    cout<<"\nEnter the number you want to count\n";
    int x;
    cin>>x;

    cout<<"The occurence of number in array  ";
    cout<<count(a,a+n,x);

    cout<<"\nThe occurence of number in vector  ";
    cout << count(v.begin(), v.end(), x);
    cout<<endl;
    return 0;
}
