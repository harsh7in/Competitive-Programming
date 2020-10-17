#include <bits/stdc++.h>
using namespace std;
int main() {
    
    unordered_map<string, vector<string>> phonebook;

    phonebook["Harsh"].push_back("1234");
    phonebook["Harsh"].push_back("5678");
    phonebook["Harsh"].push_back("9101");
    phonebook["Harsh"].push_back("1235");
    phonebook["Harsh"].push_back("8520");


    for(auto p: phonebook){
        cout<<"Name "<<p.first<<" -->  ";
        for(string s:p.second){
            cout<<s<<" ,";
        }

        cout<<endl;
    }


    return 0;
}
