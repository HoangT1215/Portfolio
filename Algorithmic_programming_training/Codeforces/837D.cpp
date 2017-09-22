// Problem analysis: this is a knapsack problem, hence we will dp with number of elements chosen, first i elements and pw5

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>

using namespace std;

std::vector <long long> a[210];

int main(){
	// dp problem
	int n,k,i,j,pw2,pw5,ans = 0;
	int dp[210][210][210],p2[210],p5[210]; // storage: the value will be pw2
	cin >> n >> k;
	int tmp,cnt = 0;
	for (i = 0; i<n; i++){
		cin >> a[i];
		tmp = a[i];
		cnt = 0;
		while (tmp%2 == 0){
			tmp /= 2;
			cnt++;
		}
		p2[i] = cnt;
		cnt = 0;
		while (tmp%5 == 0){
			tmp /= 5;
			cnt++;
		}
		p5[i] = cnt;
	}
	// dp formula
	for (i = 0;i<n;i++){
		for(j = 0;j<k;j++){
			dp[i+1][j+1][k+pw5] = max(dp[i][j][k]+p2[i],dp[i+1][j+1][k+p5[i]]) // if we select the element
			dp[i+1][j][k] = max(dp[i][j][k],dp[i+1][j][k]); // if we don't
		}
	}
	// answer
	for (i = 0; i<n; i++){
		ans = max(min(i,dpi[n][k][i]));
	}
	for (i = 0; i<n; i++){
		cout << ans << endl;
	}

}