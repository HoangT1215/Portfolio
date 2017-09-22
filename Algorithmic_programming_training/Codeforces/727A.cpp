#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

vector <long long> sequence;
vector <long long> visited;
long long a,b;

void dfs(long long v){
	sequence.push_back(v);
	if (v == b){
		cout << sequence.size() << endl;
	} else {
		
	}
}

int main(){
	cin >> a >> b;
	dfs(a);
}