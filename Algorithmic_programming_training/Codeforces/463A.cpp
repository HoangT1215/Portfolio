#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,s,m;
	cin >> n >> s;
	for (int i = 0; i<n; i++){
		int x,y;
		cin >> x >> y;
		if (x < s){
            if (y)
                sol = min(sol,y);
        }
        if (x < s || (x==s && y==0))
            ok = 1;
	}
	cout << 100 - sol;
}