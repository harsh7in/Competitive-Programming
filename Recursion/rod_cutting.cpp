#include <bits/stdc++.h>
using namespace std;

int rodCutting(int n, int a, int b, int c)
{
    if(n == 0)
      return 0;
    if(n < 0)
      return -1;
    int res = max(max(rodCutting(n-a, a, b, c), rodCutting(n-b, a, b, c)),
              rodCutting(n-c, a, b, c));

    if(res== -1)
      return -1;
    return 1+res;
}

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    
    cout << rodCutting(n, a, b, c);
}
