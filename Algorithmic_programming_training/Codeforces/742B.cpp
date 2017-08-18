#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,x,a[100005],b[100005],sum = 0;
	cin >> n >> x;
	for (long long i = 0; i<n; i++){
		cin >> a[i];
		b[a[i]^x]++;
	}
	for (long long i = 0; i<n; i++){
		sum += b[a[i]];
	}
	cout << (sum/2);
}