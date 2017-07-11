#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>

using namespace std;

int main(){
	int n,m,i,j,k;
	int t[20000], v[20000];
	cin >> n,k;
	for (i = 1; i<n+1; i++){
		cin >> t[i];
		v[i] = t[i];
	}
	sort(v+1,v+n+1);
	if (v[k+1]<0) cout << -1;
	else {
		
	}
}