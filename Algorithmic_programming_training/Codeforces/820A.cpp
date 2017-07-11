#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<iomanip> // to set precision

using namespace std;

long v0,v1,c,a,l,d = 0, s = 0;

int main(){
	cin >> c >> v0 >> v1 >> a >> l;
	while (s < c){
		d++;
		if (d>=2) s += min(v1-l,v0+a*d-l);
		else s += v0;
	}
	cout << d;
}
