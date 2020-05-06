#include<bits/stdc++.h>
using namespace std;

vector<int> prime;

void sieve()
{
  int n=100000;
  int a[n+1];
  for(int i=0;i<=n;i++)
  {
      a[i]=1;
  }
  a[0]=a[1]=0;
  for(int i=2;i*i<=n;i++)
  {
    if(a[i])
    {
      for(int j=i*i;j<=n;j+=i)
      {
        a[j]=0;
      }
    }
  }
  for(int i=0;i<=n;i++)
  {
    if(a[i]==1)
      prime.push_back(i);
  }




}

int main()
{
  sieve();

    int t;
    cin>>t;
    long long m,n;
    while(t--)
    {
        cin>>m>>n;

        bool segement[n-m+1];

        for(int i=0;i<n-m+1;i++)
            segement[i]=1;

        for(auto i: prime)
        {
            if(i*i>n)
                break;


            int start=(m/i)*i;

            if(i>=m && i<=n)
                start=i*2;


            for(int j=start;j<=n;j+=i)
            {
                segement[j-m]=0;
            }

        }
        for(int i=m;i<=n;i++)
        {
            if(segement[i-m]==1 && i!=1)
                cout<<i<<" ";
        }

        cout<<endl;



    }


  return 0;
}
