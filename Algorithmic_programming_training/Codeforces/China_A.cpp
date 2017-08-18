#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<iomanip> // to set precision

using namespace std;

int main(){
	long long n,k,i,j,t,ans = 0;
	cin >> t;
	for (i = 0; i<t; i++){
		cin >> n;
		ans = (int) n/3;
		cout << "Case #" << i+1 << ": " << ans << endl;
	}
}