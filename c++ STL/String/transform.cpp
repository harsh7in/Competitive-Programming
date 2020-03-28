#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
 {
   string a;
	string b;
	cin>>a>>b;
  cout<<a<<endl;
  cout<<b<<endl;
	transform(a.begin(),a.end(),a.begin(),::tolower);
	transform(b.begin(),b.end(),b.begin(),::tolower);
    cout<<"After lower transform"<<endl;
  cout<<a<<endl<<b<<endl;
  cout<<"After Upper transform"<<endl;
    transform(a.begin(),a.end(),a.begin(),::toupper);
	transform(b.begin(),b.end(),b.begin(),::toupper);
    cout<<a<<endl<<b<<endl;
   return 0;
 }
