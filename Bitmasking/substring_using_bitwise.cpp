#include <bits/stdc++.h>
using namespace std;


void extChar(string s , int n){
    int j=0;
    while(n>0){
        int ls=n&1;
        if(ls==1)
            cout<<s[j];
        j++;

        n=n>>1;


    }
    cout<<endl;
}




void printSubset(string s){
    int n=s.length();
    for(int i=0;i<pow(2,n);i++){
        extChar(s,i);
    }
}




int main() {
   
    string s;
    cin>>s;

    printSubset(s);

}
