#include <bits/stdc++.h>
using namespace std;


void printsub(string s, string cur="",int index=0)
{

    if( index==s.length())
    {
        cout<<cur<<endl;
        return;
    }
    printsub(s,cur,index+1);
    printsub(s,cur+s[index],index+1);

}
int main() {

	string s;
	cin>>s;

	printsub(s);
	return 0;
}
