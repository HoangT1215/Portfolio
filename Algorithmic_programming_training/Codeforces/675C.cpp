#include <bits/stdc++.h>
using namespace std;
int n;
map<long long, int> m;

/* Finding the number of zero-sum subsequences:
	- Taking the sum sequence
	- Get the maximum occurrence
*/

int main() {
	cin >> n;
	long long sum = 0;
	int f = 0;
	for (int i = 0; i < n; ++i) {
		int x; scanf("%d", &x);
		sum += x;
		m[sum] += 1;
		f = max(f, m[sum]);
	}
	cout << n-f;
}