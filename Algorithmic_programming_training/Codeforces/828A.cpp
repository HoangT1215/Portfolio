#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<iomanip> // to set precision

using namespace std;

int n,a,b,i,j,deny = 0,c1 = 0,c2 = 0;

int main(){
	int g[200010];
	cin >> n >> a >> b;
	for (i = 0; i < n; i++) 
	{
		cin >> g[i];
		if (g[i] == 2) c2++;
		else c1++;
 	}
 	deny += 2*max(c2-b,0);
	if (c2<=b) b -= c2;
	else b = 0;
	deny += max(c1-a-2*b,0);
 	cout << deny;
}