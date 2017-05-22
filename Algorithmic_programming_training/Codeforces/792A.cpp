#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
	int a[200000];
	int m,n,i,r1,r2 = 0;	
	cin>>n;
	for (i=0;i<n;i++) {
		cin >>a[i];
	}
	sort(a,a+n);
	r1 = abs(a[0]-a[1]);
	for (int i = 0; i < n-1; i++) r1 = min(r1, abs(a[i] - a[i+1]));
	for (int i = 0; i < n-1; i++) if (r1 == abs(a[i+1] - a[i])) r2++;
	cout <<r1<<" "<<r2;
}