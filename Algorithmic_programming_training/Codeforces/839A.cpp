#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<string>

using namespace std;

int n,k,i,j,sum = 0, received = 0;
int a;

int main(){
	cin >> n >> k;
	for (i=1;i<=n;i++){
		cin >> a;
		sum += a;
		received += min(sum,8);
		sum -= min(sum,8);
		if (received >= k) {
			j = i;
			break;
		}
	}
	if (received < k) cout << -1;
	else cout << j;
}