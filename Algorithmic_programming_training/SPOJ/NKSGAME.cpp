#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<string.h>
using namespace std;

const int N = 100005; // need to solve in nlogn

int main(){
	int n;
	long long b[N],c[N], m;
	cin >> n;
	for (int i = 0; i<n; i++) cin >> b[i];
	for (int i = 0; i<n; i++) cin >> c[i];
	sort(b,b+n);sort(c,c+n);
	int x = 0, y = n-1;
	m = abs(b[0] + c[n-1]);
	while ((x<n) and (y >= 0)){
		m = min(m,abs(b[x]+c[y]));
		if (b[x]+c[y] > 0){
			y--;
		} else x++;
	}
	cout << m;
}