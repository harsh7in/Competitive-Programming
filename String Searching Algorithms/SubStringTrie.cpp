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


	trie(){

		for(int i=0;i<26;i++)
			nxt[i]=NULL;
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

}

bool in_trie(string s){
	trie *cur=root;

	for(int i=0;i<s.size();i++){

		if(cur->nxt[s[i]-'a']==NULL){
			return false;
		}
			
		cur=cur->nxt[s[i]-'a'];

	}

	return true;


}



void solve()
{

	root= new trie();

	string text;
	cin>>text;
	string s;
	cin>>s;

	for(int i=0;i<text.size();i++){
		// substr will create substring from the given
		//  index to the end
		insert(text.substr(i));
	}

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
