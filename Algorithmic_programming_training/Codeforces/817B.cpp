	#include<iostream>
	#include<stdio.h>
	#include<math.h>
	#include<cstdlib>
	#include<algorithm>
	#include<list>
	#include<vector>

	using namespace std;

int main(){
	int n,i,j;
	long long x = 0,y = 0,z = 0,r = 1,cx = 1,cy = 1,cz = 0;
	long long a[100000];
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	x = a[0];
	y = a[1];
	z = a[2];
	for (i = 0; i < n; i++){
		if (a[i] == z){
			cz += 1;
		}
	}
	if (cz < n){
		if (y<z){
		r = cx*cy*cz;
		cout << r;
	}	else {
		r = (cx*cz*(cz-1)/2);
		cout << r;
	}
	} else {
		r = (n*(n-1)*(n-2)/6);
		cout << r;
	}
}