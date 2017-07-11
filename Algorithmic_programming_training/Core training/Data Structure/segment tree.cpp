#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<iomanip> // to set precision

using namespace std;

const c = 1e5;

void build(int a[2*c]){
	for (int i = n - 1; i > 0; --i) t[i] = t[i<<1] + t[i<<1|1];
}

int query(int l, int r) {  // sum on interval [l, r)
  int res = 0;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1) res += t[l++];
    if (r&1) res += t[--r];
  }
  return res;
}

int main(){
	int j;
	cin >> n >> q;
	for (j = 0; j<n; j++){
		
	}
	for (j = 0; j<q; j++){
		cin >> l >> r;
		query(l,r);

	}
}