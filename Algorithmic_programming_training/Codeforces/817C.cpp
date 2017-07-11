#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>

using namespace std;

long long n,x,s,ans;

long long f(long long m){
	int digit = 0;
	while (m>0){
		digit += m%10;
		m /= 10;
	}
	return m - digit;
}

void bin_search(long long l, long long r){
	
}

int main(){
	cin >> n,s;
	// we do binary search to find the smallest x s.t f(x)>=s
	bin_search(0,n);
	cout << (n-ans+1);
}