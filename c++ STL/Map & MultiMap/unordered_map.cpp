#include <bits/stdc++.h>
using namespace std;
int main() {
    
    unordered_map<string, int> um;

    um.insert(make_pair("mango" , 100));
    um.insert(pair<string,int>("banana", 120));
    um.insert(pair<string,int>("guavava", 12));
    um.insert(pair<string,int>("apple", 125));


    for(auto x:um){
        cout<<x.first<<"  "<<x.second<<endl;
    }







    return 0;
}
