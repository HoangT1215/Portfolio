#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<string.h>
using namespace std;

const int N = 100005; // need to solve in nlogn
vector<int> g[N];
bool visited[N];
int dp[N],cnt = 0,maxchild = 0; // save the number of children of each node

void dfs(int v){
	visited[v] = true;
	if (g[v].size() == 1) dp[v] = 0;
	else{
		maxchild = 0;
		for (int i = 0; i<g[v].size(); i++){
			if(!visited[g[v][i]]){
				dfs(g[v][i]);
			}
			maxchild = max(maxchild,dp[g[v][i]]);
			dp[v] += (dp[g[v][i]]+1);
		}
		// if maxchild is smaller than 3 and has more than one child then arrest that shit
		if (dp[v] >= 2){
			cnt++;
			dp[v] = -1;
		}
	}
}

int main(){
	int n,k;
	cin >> k;
	cin >> n;
	for (int i = 0; i<n; i++){
		int x;
		cin >> x;
		g[i].push_back(x);
		g[x].push_back(i);
	}
	dfs(1);
	cout << cnt;
}