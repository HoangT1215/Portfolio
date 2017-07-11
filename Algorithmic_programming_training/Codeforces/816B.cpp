#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<iomanip> // to set precision

using namespace std;

int main(){
	long n,k,q,i,j,a,b;
	long l,r,c[200010],p[200010];
	cin >> n >> k >> q;
	for (i = 0; i<n; i++){
		cin >> l >> r;
		c[l] += 1;
		c[r+1] -= 1;
	}
	// init temp array
	for (i = 1; i<=2*1e5; i++){
		c[i] += c[i-1];
		p[i] += p[i-1]+(c[i]>=k);
	}
	for (i = 0; i<q; i++){
		cin >> a >> b;
		cout << (p[b]-p[a-1]) << endl;
	}
	return 0;
}
