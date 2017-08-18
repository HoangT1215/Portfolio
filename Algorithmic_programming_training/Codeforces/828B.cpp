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
	long n,m,w,b = 0,i,j,l = 200,r = -1,t = 200,d = -1,maxw,maxh,maxd;
	char c;
	cin >> n >> m;
	for (i = 0; i<n; i++){
		for (j = 0; j<m; j++){
			cin >> c;
			if (c == 'B') {
				b++;
				l = min(l,j);
				r = max(r,j);
				t = min(t,i);
				d = max(d,j);
			}
		}
	}
	if ((l == 200) and (r == -1)) maxw = 0;
	else maxw = r-l+1;
	if ((t == 200) and (d == -1)) maxh = 0;
	else maxh = d-t+1;
	maxd = max(maxh,maxw);
	if (b == 0) cout << 1;
	else
	{	
		if (maxd > min(m,n)) cout << -1;
		else cout << (maxd*maxd-b);
	}
}