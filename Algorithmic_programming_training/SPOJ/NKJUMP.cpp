#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<string.h>
using namespace std;

vector<int> v[1005];

// binary search
bool bs(long long &a, int x, int i) { // found or not found
    if (a[i] == x) {
        return (i>0 && a[i-1]==x) || (i<(n-1) && a[i+1]==x); // loại trùng
    }

    long long l = 0, r = n-1;
    while (l<=r) {
        long long k = (l+r) / 2;
        if (a[k] == x) return true;
        if (a[k] < x) l = k + 1;
        else r = k - 1;
    }
    return false;
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int n;
	long long x, res = 0;
	long long a[1005],f[1005]; // quadratic time required
	cin >> n;
	for (int i = 0; i<n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
    for (int i=0; i<n; i++) {
        for (int j=i-1; j>=0; j--) if (bs(a, a[i]-a[j], j)) // binary search
        {
            f[i] = max(f[i], f[j]);
        }
        f[i] += 1;
        res = max(res, f[i]);
    }
    cout << res;
    return 0;
}