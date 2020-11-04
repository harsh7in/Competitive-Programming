#include <bits/stdc++.h>
using namespace std;

int eff_pow(int a, int b){

    if(b==0)
        return 1;

    int subProb=eff_pow(a,b/2);

    if(b&1){
        return a*subProb*subProb;
    }

    return subProb*subProb;

}

int main() {
    
    int a,b;
    cin>>a>>b;

    cout<<eff_pow(a,b);

}
