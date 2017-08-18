#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
const N = 1e5+5;

int main(){
	// problem: find the number of stars in the rectangle and the sum of brightness
	long n,q,c;
	long long t[N];
	long x[N][2],y[N][2];
	int cx[N],cy[N],cs[N];
	int x,y,s;
	cin >> n >> q >> c;
	for (long i = 0; i < n; i++){
		cin >> cx[i] >> cy[i] >> cs[N];
	}
	for (long j = 0; j < q; j++){
		cin >> t[j] >> x[j][0] >> y[j][0] >> x[j][1] >> y[j][1];
		// algo complexity required: O(nlogn)
		// if (x-x1)(x-x2) <= 0 and (y-y1)(y-y2) <= 0 then the star is in the rectangle
	}
	// problem analysis: analogous to 1-D version of the problem
	
}