#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
using namespace std;
int main() {
	long long n,i,j,min,max;
	int b[200000];
	long long ans;
	cin >> n;
	for (i=0;i<n;i++){
		cin >> b[i];
	}
	sort(b,b+n);
	i = 0;
	j = n-1;
	min = b[i];
	max = b[j];
	while (b[i] == min){
		i++;
	}
	while (b[j] == max){
		j -= 1;
	}
	if (max == min){
		cout << 0 << " " << n*(n-1)/2;
	} else {
		ans = i*(n-1-j);
		cout << (max-min) << " " << ans;
	}
}