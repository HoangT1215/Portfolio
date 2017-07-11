#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>

using namespace std;

int main(){
	int n,i;
	bool hit = false;
	int l[4], s[4], r[4], p[4];
	for (i = 1; i <= 4; i++){
		cin >> l[i] >> s[i] >> r[i] >> p[i];
		if ((l[i]+s[i]+r[i])*p[i] > 0) {
			hit = true;
		}
	}
	if (hit == true) cout << "YES";
	else cout << "NO";
}