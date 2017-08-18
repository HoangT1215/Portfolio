#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

vector <int> g[100001];

int main(){
	long n,k;
	long a[100001],b[100001];
	cin >> n;
	for (long i = 0;i<n;i++){
		cin >> a[i] >> b[i];
		g[a].push_back(b);
		g[b].push_back(a);
	}
	// we will construct a bipartite algorithm for the graph
}