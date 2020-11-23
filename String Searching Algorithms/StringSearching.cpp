#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


struct trie{
	
	trie *nxt[26];
	bool ended;

	trie(){

		for(int i=0;i<26;i++)
			nxt[i]=NULL;
		ended=false;

	}

};

trie *root;

void insert(string s){

	trie *cur=root;

	for(int i=0;i<s.size();i++){
		if(cur->nxt[s[i]-'a']==NULL){
			cur->nxt[s[i]-'a']=new trie();
		}
		cur=cur->nxt[s[i]-'a'];
	}

	cur->ended=true;

}

bool in_trie(string s){
	trie *cur=root;

	for(int i=0;i<s.size();i++){

		if(cur->nxt[s[i]-'a']==NULL){
			return false;
		}
			
		cur=cur->nxt[s[i]-'a'];

	}

	return cur->ended;


}



void solve()
{

	root= new trie();

	insert("harsh");
	insert("kumar");
	insert("competitive");
	insert("programming");

	string s;
	cin>>s;
	if(in_trie(s)){
		cout<<"Yes Found"<<endl;
	}
	else
		cout<<"Not Found"<<endl;


}



int32_t main()
{
	io();
	solve();
	return 0;
}
