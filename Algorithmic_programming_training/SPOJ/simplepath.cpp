#include<bits/stdc++.h>

using namespace std;
const MOD = 1e9+7;

vector<pair<int, int>> g[100005];
bool visited[100005];
int n,t,x,y,z;
long long sum,dp[100005];

void dfs(int v){
	visited[v] = true;
	if (g[v].size() == 1) dp[v] == 0;
	else {
		for (long i = 0; i<g[v].size(); i++){
			if (!visited[g[v][i].first]){
				dfs(g[v][i].first);
			}
			dp[v] = (dp[g[v][i].first] + g[v][i].second)%MOD;
		}
	}
}

int main(){
	cin >> t;
	for (int i = 0; i<t; i++){
		cin >> n;
		for (int j = 0; j<n-1; j++){
			cin >> x >> y >> z;
			g[x].push_back(make_pair(y,z));
			g[y].push_back(make_pair(x,z));
		}
		dfs(1);
		// dp[x] = sum dp[g[x][i].first] + g[x][i].second;
		for (int j = 0; j<n-1; j++) sum += (dp[j]%MOD);
		cout << sum;
	}
	return 0;
}