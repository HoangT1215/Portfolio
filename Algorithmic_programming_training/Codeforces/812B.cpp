#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>

using namespace std;

const int size = 15;

int main(){
	int sum = 0,j,n,m,i,fl = n,farthest,highest = 0,t; // i-th floor means n-i-1
	bool left = true;
	char s[110][20];
	cin >> n >> m;
	for (i = 0; i < n; i++){
		cin >> s[i];
	}
	j = n-1;
	for (i = 0; i < n; i++)
	{
		t = 0;
		for (j = 0; j<m+2; j++){
			if (s[i][j] == '1') t += 1; 
		}
		if (t > 0) {
			highest = i;
			break;
		}
	}
	highest = n-1-highest;
	j = n-1;
	while (j>=0){
		farthest = 0;
		if (left) {
			for (i = 0;i<m+2;i++){
				if (s[j][i] == '1') farthest = i;	
			}
		} else {
			for (i = m+1;i>=0;i--){
				if (s[j][i] == '1') farthest = m+1-i;
			}
		}
		if (n-1-j < (highest)){
			if (farthest > (m+1)/2){
				left = not left;
				farthest = m+1;
			} else farthest *= 2;
		}
		sum += farthest;
		j--;
	}
	sum += highest;
	cout << sum;
	return 0;
}