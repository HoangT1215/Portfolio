#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<string.h>

using namespace std;

long m,n,i,j,ans = 0,k = 0,rem = 0;
long a[100010];
long b[100010],removed[100010];

int main(){
	cin >> n;
	for (i = 0; i<n; i++) {
		cin >> a[i];
		b[i] = a[i];
		removed[i] = 0;
	}
	sort(b,b+n);
	i = 0;
	while ((n-rem) > 0){
		if (removed[i] == 1) i = (i+1)%(n);
		if (a[i] == b[k]){
			k++;
			removed[i] = 1;
			rem++;
		}
		i = (i+1)%(n);
		ans++;
	}
	cout << ans;
}