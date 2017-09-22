#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<string>
using namespace std;

const int N = 100010,M = 26;
int ch[N][M]; // trie
long long n,k,sz,last = 1;
char s[N];

void add(string s)
{
	int now = 0;
	for(int i = 0; i < s.length(); i++)
		if(ch[now][s[i] - 'a'])
			now = ch[now][s[i] - 'a'];
		else
			now = ch[now][s[i] - 'a'] = last++;
}

void dfs(int v){

}

int main(){
	cin >> n >> k;
	string st;
	for (long i = 0; i<n; i++){
		cin >> st;
		add(st);
	}
	
}