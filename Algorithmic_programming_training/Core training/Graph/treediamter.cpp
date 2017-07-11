// algorithm on tree

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>

using namespace std;

int n,m,i,x,y,z = 0;
vector <int> g[111];

int main(){
	cin >> n; // number of nodes
	// init graph
	for (i = 0; i<n-1; i++){
		cin >> x >> y;
		g[x].push_back(y); // adjacency list
		g[y].push_back(x);
	}
	
}