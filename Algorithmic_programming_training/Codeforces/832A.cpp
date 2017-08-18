#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>

using namespace std;

int main(){
	long long n,k,i,j;
	cin >> n >> k;
	if (((n-n%k)/k)%2 != 0) cout << "YES";
	else cout << "NO";
}