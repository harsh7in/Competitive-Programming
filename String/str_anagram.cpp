#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    int c=0;
    int x[300]={0};
    int y[300]={0};
    for(int i=0;i<a.length();i++)
    {
        x[a[i]]++;
        y[b[i]]++;
    }
    for(int i=0;i<300;i++)
    {
        if(x[i]!=y[i])
        {
            c++;
        }
    }
    if(c==0) cout<<"yes"<<endl;
    else cout<<"no"<<endl;

    return 0;
} 
