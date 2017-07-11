#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<iomanip> // to set precision

using namespace std;

long long i,j,m,n = 1,a,b;

int main(){
	cin >> a >> b;
	m = min(a,b);
	for (i = 1; i <= m; i++) n *= i;
	cout << n;
}
