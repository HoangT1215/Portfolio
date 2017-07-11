#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<iomanip> // to set precision

using namespace std;

/* Calculating the number of connected components in a graph */

vector <int> g[50];
bool u[50]; // visited boolean
int n,m,i, origin, dest, connected_component = 0, z = 0;

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
	cin >> n >> m; /* n is no more than 50, so a O(n^3) algorithm is possible */
	for (i = 1; i <= m; i++){
		cin >> origin >> dest;
        g[origin].push_back(dest); // adjacency list
        g[dest].push_back(origin);
	}
	/* Finished init graph, now onto dfs */
    for (i = 1; i <= n; i++){
        if (not u[i]){
            dfs(i);
            connected_component += 1;
        }
    }
    std::cout << std::setprecision(20) << pow(2, n-connected_component) << '\n';
}