#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;

vector<int> g[N];
int n,q,x,y,a,b,c;
int p[N][18],t[N],d[N]; // d is the distance array from 1

void dfs(int u){
	for(int i=0; i<g[u].size(); ++i){
		int v=g[u][i];
		if (v==p[u][0]) continue; // this means if v is the direct parent of u then pass, so we don't need the visited array
		p[v][0]=u;
		d[v]=d[u]+1;
		dfs(v);
	}
}

int lca(int u, int v){
	if (d[u]>d[v]) swap(u,v);
	int diff=d[v]-d[u];
	for(int i=0; i<18; ++i)
		if (diff>>i&1) v=p[v][i];
	if (u==v) return u;
	for(int i=17; ~i; --i) if(p[u][i]!=p[v][i])u=p[u][i],v=p[v][i];
	return p[u][0];
}

int main(){
	cin >> n >> q;
	for (int i = 0; i<n-1; i++){
		cin >> x >> y;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	// init
	for (int i = 0; i < N; i++)
    	for (int j = 0; j < 18; j++)
    		p[i][j] = -1;

    // Quy hoạch động
  	for (j = 1; j < 18; j++)
    	for (i = 0; i < N; i++)
      		if (P[i][j - 1] != -1) P[i][j] = P[P[i][j - 1]][j - 1];

	for (int i = 0; i<q; i++){
		cin >> a >> b >> c;
		// applies lca here
	}
}