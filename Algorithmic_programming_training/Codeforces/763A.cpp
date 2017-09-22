// dfs on tree, time limit O(nlogn)

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>

using namespace std;
int n,x,y,cut = 0,index = 2;
int c[10000];
vector <int> g[111];
bool u[111],annoyed = false; // visited boolean

void dfs(int i){
	u[i]=true; // mark as visited
	for(int j=0;j<g[i].size();j++){
		if ((!u[g[i][j]]) and (i != 1)) 
			{
				if (c[g[i][j]] == c[i]) dfs(g[i][j]);
				else{
					annoyed = true;
					cut++;
					break;
				}
			}
	}
}

int main(){
	cin >> n;
	for (int i = 1; i < n; i++){
		cin >> x >> y;
		g[x].push_back(y); // adjacency list
		g[y].push_back(x);
	}
	for (int i = 1; i < n+1; i++){
		cin >> c[i];
	}
	for (int i = 0; i < g[1].size(); i++){
		annoyed = false;
		if (!u[g[1][i]]){
			dfs[g[1][i]];
			if (annoyed) index = g[1][i];
		}
	}
	if (cut == 0){
		cout << "YES" << endl;
		cout << index;
	} else {
		cout << "NO";
	}
}