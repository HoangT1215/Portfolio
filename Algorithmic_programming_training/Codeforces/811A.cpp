#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<iomanip> // to set precision

using namespace std;
long long a,b;
int i = 0;

int main(){
	cin >> a >> b;
	while (a >= 0 and b >= 0){
		a -= (2*i+1);
		b -= (2*i+2);
		i++;
	}
	if (a < 0){
		cout << "Vladik";
	}
	else {
		cout << "Valera";
	}
}