// practicing more dfs
// the problem is the minimal coloring problem on a tree, given that if a-b-c then c(a), c(b), c(c) are distinct

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>

using namespace std;

// In this problem, it is better to use adjacency list setup because it is easier to traverse through adjacent nodes

int con = 100;
vector <int> g[con];
bool u[]; // visited boolean
void dfs(int i){
	u[i]=true; // mark as visited
	z++; // counting nodes in the connected component
	for(int j=0;j<g[i].size() /* g[i].size() is the degree of vertex i */;j++){
		if(!u[g[i][j]]) // if the j-th adjacent vertex of i isn't visited
			{
				dfs(g[i][j]);
			}
	}
}

int main(){
	int n, i, ori, dest, mx_color = 0;
	int color[20000];
	cin >> n;
	for (i = 1; i < n; i++) // this graph is a tree, also it is given that the graph is connected
	{
		cin >> ori >> dest;
		g[ori].push_back(dest); // adjacency list
		g[dest].push_back(ori);
	}
	sort(g+1, g+n+1);
	mx_color = g[n].size(); // the max number of color needed is equal to max degree + 1
	

}