#include <bits/stdc++.h>
using namespace std;

bool pal(string s, int f , int l)
{   if(s[f]==s[l])
        {
            if(f<=l)
                return pal(s,f+1,l-1);
            else
                return 1;

        }

    else
        return 0;

}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    char c[200];

	    string s;
	cin>>c;
	s=c;
	int f=0;
	int l=s.length();
	l--;
	int x=pal(s,f,l);
	if(x==1)
	    cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
	}

	return 0;
}
