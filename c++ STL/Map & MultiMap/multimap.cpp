#include <bits/stdc++.h>
using namespace std;
int main() {

    multimap<char, string> mm;

    int n;
    cin>>n;

    char ch;
    string s;
    for(int i=0;i<n;i++){
         cin>>ch>>s;
        mm.insert(make_pair(ch,s));
    }

    for(auto p: mm){
        cout<<p.first<<"  "<<p.second<<endl;
    }
    

    return 0;
}
