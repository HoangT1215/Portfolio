// dfs on tree, time limit O(nlogn)

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>

using namespace std;
int n,i,x,y;
int c[10000];
vector <int> g[111];
bool u[111]; // visited boolean

void dfs(int i){
	u[i]=true; // mark as visited
	z++; // counting nodes in the connected component
	for(int j=0;j<g[i].size();j++){
		if(!u[g[i][j]]) 
			{
				dfs(g[i][j]);
			}
	}
}

int main(){
	cin >> n;
	for (i = 1; i < n; i++){
		cin >> x >> y;
		g[x].push_back(y); // adjacency list
		g[y].push_back(x);
	}
	for (i = 1; i < n+1; i++){
		cin >> c[i];
	}
	// first, we need to find the root vertex
	

}