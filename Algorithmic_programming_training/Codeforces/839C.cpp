#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

vector<int>g[100001];

int n,k,a,b,cnt = 0;
float d[100001],parent[100001],p[100001];
float ans = 0;
bool visited[100001];

// algo: dp on children, O(n) complexity
// save states: number of children, expected length
// probability formula = products of 1/(deg-1)
void dfs(int v){
    visited[v] = true;
    cnt++;
    for (int i = 0;i < g[v].size(); i++){
        if (!visited[g[v][i]]){
            d[g[v][i]] = d[v]+1;
            if (v != 1) p[g[v][i]] = p[v] / (g[v].size()-1);
            else p[g[v][i]] = p[v] / (g[v].size());
            dfs(g[v][i]);
        }
    }
}

int main(){
    cin >> n;
    for (int i = 0; i<n-1;i++){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    d[1] = 0;
    p[1] = 1;
    dfs(1);
    for (int i = 1;i<n+1;i++){ // local variable to avoid confusion
        if (g[i].size() == 1) ans += p[i]*d[i];
    }
    cout << fixed << showpoint;
    cout << setprecision(8);
    cout << ans << endl;
}