#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

ll stringToint(string a, ll m){
    ll ans=0;
    for(int i=0;i<a.size();i++){
        ans=(ans*10)%m+(a[i]-'0');
        ans%=m;
    }
    return ans;
}

ll power(ll a,ll y,ll m){
    if (y==0)
        return 1;
    
    ll smallpower=power(a,y/2,m);
    smallpower%=m;
    smallpower=(smallpower*smallpower)%m;

    if(y&1)
        return (a*smallpower)%m;

    return smallpower;
}

int main(){

    int t;
    cin>>t;
    string a,b;
    while(t--){
        cin>>a>>b;

        ll x=stringToint(a,mod);
        ll y=stringToint(b,mod-1);


        ll ans=power(x,y,mod);

        cout<<ans<<endl;



    }


    return 0;
}
