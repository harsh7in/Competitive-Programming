#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


struct point{
	int x,y;

	// Operator Overloding
	bool operator < (point &p){
		if(p.x==x)
			return y<p.y;
		else
			return x<p.x;
	}

	bool operator == (point &p){
		return (x==p.x && y==p.y);
	}

};


bool cw(point a,point b,point c){
	return a.x*(b.y-c.y) + b.x*(c.y-a.y) + c.x*(a.y-b.y)>0;
}
bool ccw(point a,point b,point c){
	return a.x*(b.y-c.y) + b.x*(c.y-a.y) + c.x*(a.y-b.y)<0;
}

bool collinear(point a,point b,point c){
	return a.x*(b.y-c.y) + b.x*(c.y-a.y) + c.x*(a.y-b.y)<0;
}


void convex_hull(vector<point> &p){
	if(p.size()<=2)
		return;

	sort(p.begin(),p.end());

	// Now p[0]=p1 and p[n-1]=p2
	int i,n=p.size();
	point p1=p[0];
	point p2=p[n-1];

	// Point p1 is bottom left point and 
	// p2 is top right point

	vector<point> up,down;
	up.push_back(p1);
	down.push_back(p1);

	for(int i=1;i<n;i++){

		// now i have to check if my current point 
		// is in lower half or upper half 

		if (i==n-1 || !ccw(p1,p[i],p2)){
			// p[1] is in the upper half
			while(up.size()>=2 && ccw(up[up.size()-2],up[up.size()-1],p[i])){
				up.pop_back();
			}
			up.push_back(p[i]);
		}

		if (i==n-1 || !cw(p1,p[i],p2)){
			//p[i] is in the lower half
			while(down.size()>=2 && cw(down[down.size()-2], down[down.size()-1],p[i])){
				down.pop_back();
			}
			down.push_back(p[i]);
		}

	}


	// up and down vector contains all the points 
	// including the points p1 and p2 repeatedly
	p.clear();
	for(i=0;i<up.size();i++){
		p.push_back(up[i]);
	}

	for(i=0;i<down.size();i++){
		p.push_back(down[i]);
	}


	// p vector contains all the poind from up as well as down
	sort(p.begin(),p.end());
	p.resize(unique(p.begin(),p.end())-p.begin());
	


}


void solve()
{

	int i,j,k,n,m,ans=0,cnt=0,sum=0;

	cin>>n;
	vector<point> p(n);
	for(int i=0;i<n;i++){
		cin>>p[i].x>>p[i].y;
	}
	map<pair<int,int>,int> mp;
	cin>>m;
	for(int i=0;i<m;i++){
		point temp;
		cin>>temp.x>>temp.y;
		mp[ {temp.x,temp.y} ]++;
		p.push_back(temp);
	}
	convex_hull(p);
	// now p contains all the points of convex hull
	int flag=0;
	for(auto x:p){
		// cout<<x.x<<" "<<x.y<<endl;

		if(mp.count({x.x,x.y})){
			flag++;
			break;
		}


	}
	if (flag==0)
		cout<<"YES";
	else
		cout<<"NO";


 
}



int32_t main()
{
	io();
	solve();
	return 0;
}
