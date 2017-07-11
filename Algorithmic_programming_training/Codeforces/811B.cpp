#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>

using namespace std;
long long n,m,i,j,b;
long long p[10000],q[10000],l,r,x; // maybe a O(n^3/2) algo?

int main(){
	cin >> n >> m;
	for (i = 1; i<n+1; i++){
		cin >> p[i];
	}
	for (i = 1; i<m+1; i++){
		cin >> l >> r >> x;
		b = 0;
		for (j = l;j<r+1;j++){
			if (p[j]<p[x]) b++;
		}
		if (b == x-l){
				q[i] = 1;
			} else {
				q[i] = 0;
			}
	}
	for (i = 1; i<m+1; i++){
		if (q[i] == 1){
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	return 0;
}