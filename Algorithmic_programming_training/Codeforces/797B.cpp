#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
	int a[100000],b[100000];
	int n,c,i = 0;
	long sum = 0,m = 0;
	cin >> n;
	for (i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for (i=0;i<n;i++){
		if (a[i]>0){
			sum += a[i];
		}
	}
	c = 0;
	if (sum % 2 == 1){
		cout << sum;
	} else {
		for (i = 0;i<n; i++){
			if (a[i] % 2 != 0)
			{
				b[c] = sum - abs(a[i]);
				c++;
			}
		}
		sort(b,b+c);
		cout << b[c-1];
	}
	
}