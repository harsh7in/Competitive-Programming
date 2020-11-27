#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define int             long long
#define mod             1000000000
#define w(x)            int x; cin>>x; while(x--)
#define f(i,s,n)		for(int i=s;i<n;i++)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

vector<int>a,b,c;
int k;

void inputArray(int a[], int n){
	f(i,0,n){
		cin>>a[i];
	}
}

void outputArray(int a[], int n){
	f(i,0,n){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}



vector<vector<int>> multiply(vector<vector<int>>A, vector<vector<int>>B){
	vector<vector<int>> C(k+1,vector<int>(k+1));

	for(int i=1;i<=k;i++){
		for(int j=1;j<=k;j++){
			for(int x=1;x<=k;x++){
				C[i][j]=( C[i][j]+ (A[i][x]*B[x][j])%mod)%mod;
			}
		}
	}
    return C;
}

vector<vector<int>> pow(vector<vector<int>> A ,int p){

	if(p==1)
		return A;

	if(p&1){
		return multiply(A,pow(A,p-1));
	}

	vector<vector<int>> X=pow(A,p/2);

	return multiply(X,X);
}





int compute(int n){

	if(n==0)
		return 0;

	if(n<=k)
		return b[n-1];


	vector<int> f1(k+1);
	// Indexing from 1

	for(int i=1;i<=k;i++){
		f1[i]=b[i-1];
	}


	// Transformation Matrix
	vector<vector<int>> tm(k+1, vector<int>(k+1));

	for(int i=1;i<=k;i++){
		for(int j=0;j<=k;j++){
			if(i<k){
				// Fill 0 and 1
				if(j==i+1)
					tm[i][j]=1;
				else
					tm[i][j]=0;	
			}
			else{
				tm[i][j]=c[k-j];
			}
		}
	}


	tm=pow(tm,n-1);



	int res=0;
	for(int i=1; i<=k;i++){
		res=(res + (tm[1][i]* f1[i])%mod)%mod;
	}

	return res;


}




void solve()
{
	int n,t;
	cin>>t;
	while(t--){
		cin>>k;

		int num;

		for(int i=0;i<k;i++){
			cin>>num;
			b.push_back(num);
		}

		for(int i=0;i<k;i++){
			cin>>num;
			c.push_back(num);
		}


		cin>>n;

		cout<<compute(n)<<endl;


        b.clear();
        c.clear();



	}


}


int32_t main()
{
	solve();
	return 0;
}