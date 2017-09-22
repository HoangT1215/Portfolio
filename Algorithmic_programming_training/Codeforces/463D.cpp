#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<string>
using namespace std;

int lcs(int *X, int *Y, int m, int n )
{
   if (m == 0 || n == 0)
     return 0;
   if (X[m-1] == Y[n-1])
     return 1 + lcs(X, Y, m-1, n-1);
   else
     return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}

int main(){
	int n,k,x;
	int dp[1005][1005];
	vector<int> v[5];
	cin >> n >> k;
	for (int i = 0; i<k; i++){
		for (int j = 0; j<n; j++){
			cin >> x;
			v[i].push_back(x);
		}
	}
	// lcs
	
}