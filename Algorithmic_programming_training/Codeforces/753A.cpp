#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int f(int k){
	int s = 0, i = 0;
	while (s<=k){
		i++;
		s += i;
	}
	return (i-1);
}

int main() {
	int n,m,t=0;
	cin >> n;
	m = f(n);
	cout << m << endl;
	while (m--){
		t += 1;
		if (m!=0){
			cout << t << " ";
			n -= t;
		} else {cout << n;}
	}
}
