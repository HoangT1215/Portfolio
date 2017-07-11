#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<iomanip> // to set precision

using namespace std;

const long long MOD = 1e9+7;

long long t,l,r,i,j,m,n;

long long f(long n){
long long s = 0,i1;
bool prime = true;
	if (n == 1) return 0;
	else
	{
		for (i1 = 2; i1 <= sqrt(n)+1; i++){
			if ((n%i1) == 0){
				s += n*(i1-1)/2;
				n /= i1;
				prime = false;
				s += f(n);
				break;
			}
		}
		
	}
	if (prime == true) return n*(n-1)/2;
	else {
		
		return s;
	} 
}

int main(){
	long long sup = 0;
	cin >> t >> l >> r;
	for (i = l; i<=r; i++){
		sup += pow(t,i-l)*f(i);
		if (sup >= MOD) sup -= MOD;
	}
	cout << sup;
}
