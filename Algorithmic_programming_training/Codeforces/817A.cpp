#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>

using namespace std;

int main() {
	int x1,x2,y1,y2,x,y;
	cin >> x1 >> y1 >> x2 >> y2;
	cin >> x >> y;
	if (((x1-x2)%x == 0) and ((y1-y2)%y == 0) and ((x1-x2)/x - (y1-y2)/y)%2 == 0){
		cout << "YES";
	} else cout << "NO";
}