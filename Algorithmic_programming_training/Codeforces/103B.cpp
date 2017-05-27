/* practice dfs */

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
bool u[111]; // visited boolean
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
int main()
{
	cin >>n >> m;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		g[x].push_back(y); // adjacency list
		g[y].push_back(x);
	}
	if(n!=m){cout<<"NO";return 0;}
		dfs(1);
	if(z==n){
		cout<<"FHTAGN!";
	} 
	else cout<<"NO";
	return 0;
}