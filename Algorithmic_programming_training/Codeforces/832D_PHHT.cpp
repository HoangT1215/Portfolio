#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;

typedef long long ll;

int n,a[3],p[18][N],d[N],m;
vector<int> adj[N];

void dfs(int u){
	for(int i=0; i<adj[u].size(); ++i){
		int v=adj[u][i];
		if(v==p[0][u])continue;
		p[0][v]=u;
		d[v]=d[u]+1;
		dfs(v);
	}
}

int lca(int u,int v){
	if(d[u]>d[v])swap(u,v);
	int diff=d[v]-d[u];
	for(int i=0; i<18; ++i)if(diff>>i&1)v=p[i][v];
	if(u==v)return u;
	for(int i=17; ~i; --i)if(p[i][u]!=p[i][v])u=p[i][u],v=p[i][v];
	return p[0][u];
}

int main(){
	freopen("input.txt","r",stdin);
	scanf("%d%d",&n,&m);
	for(int i=2,u; i<=n; ++i){
		scanf("%d",&u);
		adj[i].push_back(u);
		adj[u].push_back(i);
	}
	dfs(1);
	for(int i=1; i<18; ++i)
		for(int j=1; j<=n; ++j)p[i][j]=p[i-1][p[i-1][j]];
	while(m--){
		scanf("%d%d%d",&a[0],&a[1],&a[2]);
		sort(a,a+3);
		int res=0;
		do{
			int k=0;
			int x=lca(a[0],a[2]);
			int y=lca(a[0],a[1]);
			if(x==y){
				int z=lca(a[1],a[2]);
				k=d[z]-d[x];
			}
			res=max(res,min(d[a[0]]-d[x],d[a[0]]-d[y])+1+k);
		}while(next_permutation(a,a+3));
		printf("%d\n",res);
	}
}