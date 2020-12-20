#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


class Node{
	public:
		char data;
		unordered_map<int,Node*> children;
		bool last;

		Node(char d){
			data=d; 
			last=false;
		}
		
};


class Trie{
	Node* root;
	int cnt;

	public:
		Trie(){
			root=new Node('\0');
			cnt=0; 
		}

		void insert(char *w){
			Node* temp=root;
			for(int i=0;w[i]!='\0';i++){
				char ch=w[i];
				if(temp->children.count(ch)){
					temp->children[ch];
				}
				else{
					Node* n=new Node(ch);
					temp->children[ch]=n;
					temp=n;
				}	
			}

			temp->last=true;


		}

		bool find(char *w){
			Node* temp=root;
			for(int i=0;w[i]='\0';i++){
				char ch=w[i];
				if(temp->children.count(ch)==0)
					return false;
				else
					temp=temp->children[ch];

			}

			return temp->last;
			

		}


};




void solve()
{

	Trie t;
	char word[][10]={"a","hello","not","news","apple"};
	char w[10];
	cin>>w;

	for(int i=0;i<5;i++)
		t.insert(word[i]);

	if(t.find(w))
		cout<<"Present";
	else
		cout<<"Not present";



 
}



int32_t main()
{
	io();
	solve();
	return 0;
}
